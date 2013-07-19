#include "stdafx.h"
#include "tcp_client.h"
#include <boost/function.hpp>
#include <boost/bind.hpp>
#include <boost/asio.hpp>

CTcpClient::CTcpClient(
    boost::asio::io_service& io_service,
    tcp::endpoint& end_point,
    tcp::resolver::iterator endpoint_iterator)
    : io_service_(io_service)
    , socket_(io_service, end_point)
{
    boost::asio::async_connect(
        socket_,
        endpoint_iterator,
        boost::bind(&CTcpClient::handle_connect, this, boost::asio::placeholders::error));
}

CTcpClient::~CTcpClient()
{

}

int CTcpClient::Send( void* pBuf, unsigned int len )
{
    io_service_.post(std::bind(&CTcpClient::do_write, this, pBuf, len));
    return 0;
}

int CTcpClient::RegisterMessageCallback(
    const google::protobuf::Descriptor* desc,
    const MessageCallback& callback )
{
    if (desc)
    {
        disp_.registerMessageCallback(desc, callback);
        return 0;
    }
    return -1;
}

int CTcpClient::UnregisterMessageCallback(
    const google::protobuf::Descriptor* desc)
{
    if (desc)
    {
        disp_.unregisterMessageCallback(desc);
        return 0;
    }
    return -1;
}

void CTcpClient::Close()
{
    io_service_.post(std::bind(&CTcpClient::do_close, this));
}

void CTcpClient::Connect()
{
    std::shared_ptr<std::thread> t(
        new std::thread(boost::bind(&boost::asio::io_service::run, &io_service_)));
    t->join();
}

void CTcpClient::handle_connect( const boost::system::error_code& error )
{
    if (!error)
    {
//             boost::asio::async_read(socket_,
//                 boost::asio::buffer(read_msg_.data(), chat_message::header_length),
//                 boost::bind(&CTcpClient::handle_write, this,
//                 boost::asio::placeholders::error));
    }
}

void CTcpClient::do_write(void* pBuf, unsigned int len)
{
    msg_queue_.push_back(std::make_pair(pBuf, len));

    boost::asio::async_write(
        socket_,
        boost::asio::buffer(msg_queue_.front().first, msg_queue_.front().second),
        boost::bind(&CTcpClient::handle_write, this, boost::asio::placeholders::error));
}

void CTcpClient::handle_write(const boost::system::error_code& error)
{
    if (!error)
    {
        msg_queue_.pop_front();
        if (!msg_queue_.empty())
        {
            boost::asio::async_write(
                socket_,
                boost::asio::buffer(msg_queue_.front().first, msg_queue_.front().second),
                boost::bind(&CTcpClient::handle_write, this, boost::asio::placeholders::error));
        }
    }
    else
    {
        do_close();
    }
}

void CTcpClient::do_close()
{
    socket_.close();
}
