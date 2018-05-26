/* search_client.cpp

 Generated by phxrpc_pb2client from search.proto

*/

#include <iostream>
#include <memory>
#include <stdlib.h>
#include <mutex>

#include "search_client.h"
#include "phxrpc_search_stub.h"

#include "phxrpc/rpc.h"

static phxrpc::ClientConfig global_searchclient_config_;
static phxrpc::ClientMonitorPtr global_searchclient_monitor_;

bool SearchClient :: Init( const char * config_file )
{
    return global_searchclient_config_.Read( config_file );
}

const char * SearchClient :: GetPackageName() {
    const char * ret = global_searchclient_config_.GetPackageName();
    if (strlen(ret) == 0) {
        ret = "search";
    }
    return ret;
}

SearchClient :: SearchClient()
{
    static std::mutex monitor_mutex;
    if ( !global_searchclient_monitor_.get() ) { 
        monitor_mutex.lock();
        if ( !global_searchclient_monitor_.get() ) {
            global_searchclient_monitor_ = phxrpc::MonitorFactory::GetFactory()
                ->CreateClientMonitor( GetPackageName() );
        }
        global_searchclient_config_.SetClientMonitor( global_searchclient_monitor_ );
        monitor_mutex.unlock();
    }
}

SearchClient :: ~SearchClient()
{
}

int SearchClient :: PHXEcho( const google::protobuf::StringValue & req,
        google::protobuf::StringValue * resp )
{
    const phxrpc::Endpoint_t * ep = global_searchclient_config_.GetRandom();

    if(ep != nullptr) {
        phxrpc::BlockTcpStream socket;
        bool open_ret = phxrpc::PhxrpcTcpUtils::Open(&socket, ep->ip, ep->port,
                    global_searchclient_config_.GetConnectTimeoutMS(), NULL, 0, 
                    *(global_searchclient_monitor_.get()));
        if ( open_ret ) {
            socket.SetTimeout(global_searchclient_config_.GetSocketTimeoutMS());

            SearchStub stub(socket, *(global_searchclient_monitor_.get()));
            return stub.PHXEcho(req, resp);
        } 
    }

    return -1;
}

int SearchClient :: PhxBatchEcho( const google::protobuf::StringValue & req,
        google::protobuf::StringValue * resp )
{
    int ret = -1; 
    size_t echo_server_count = 2;
    uthread_begin;
    for (size_t i = 0; i < echo_server_count; i++) {
        uthread_t [=, &uthread_s, &ret](void *) {
            const phxrpc::Endpoint_t * ep = global_searchclient_config_.GetByIndex(i);
            if (ep != nullptr) {
                phxrpc::UThreadTcpStream socket;
                if(phxrpc::PhxrpcTcpUtils::Open(&uthread_s, &socket, ep->ip, ep->port,
                            global_searchclient_config_.GetConnectTimeoutMS(), *(global_searchclient_monitor_.get()))) { 
                    socket.SetTimeout(global_searchclient_config_.GetSocketTimeoutMS());
                    SearchStub stub(socket, *(global_searchclient_monitor_.get()));
                    int this_ret = stub.PHXEcho(req, resp);
                    if (this_ret == 0) {
                        ret = this_ret;
                        uthread_s.Close();
                    }   
                }   
            }
        };  
    }   
    uthread_end;
    return ret;
}

int SearchClient :: Search( const search::SearchRequest & req,
        search::SearchResult * resp )
{
    const phxrpc::Endpoint_t * ep = global_searchclient_config_.GetRandom();

    if(ep != nullptr) {
        phxrpc::BlockTcpStream socket;
        bool open_ret = phxrpc::PhxrpcTcpUtils::Open(&socket, ep->ip, ep->port,
                    global_searchclient_config_.GetConnectTimeoutMS(), NULL, 0, 
                    *(global_searchclient_monitor_.get()));
        if ( open_ret ) {
            socket.SetTimeout(global_searchclient_config_.GetSocketTimeoutMS());

            SearchStub stub(socket, *(global_searchclient_monitor_.get()));
            return stub.Search(req, resp);
        } 
    }

    return -1;
}

int SearchClient :: Notify( const google::protobuf::StringValue & req,
        google::protobuf::Empty * resp )
{
    const phxrpc::Endpoint_t * ep = global_searchclient_config_.GetRandom();

    if(ep != nullptr) {
        phxrpc::BlockTcpStream socket;
        bool open_ret = phxrpc::PhxrpcTcpUtils::Open(&socket, ep->ip, ep->port,
                    global_searchclient_config_.GetConnectTimeoutMS(), NULL, 0, 
                    *(global_searchclient_monitor_.get()));
        if ( open_ret ) {
            socket.SetTimeout(global_searchclient_config_.GetSocketTimeoutMS());

            SearchStub stub(socket, *(global_searchclient_monitor_.get()));
            return stub.Notify(req, resp);
        } 
    }

    return -1;
}


