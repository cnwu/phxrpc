/* phxrpc_search_dispatcher.h

 Generated by phxrpc_pb2service from search.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#pragma once

#include "phxrpc/http.h"
#include "phxrpc/rpc.h"

class SearchService;

class SearchDispatcher
{
public:
    SearchDispatcher( SearchService & service, phxrpc::DispatcherArgs_t * dispatcher_args );

    ~SearchDispatcher();

    int PHXEcho( const phxrpc::HttpRequest & request, phxrpc::HttpResponse * response );

    int Search( const phxrpc::HttpRequest & request, phxrpc::HttpResponse * response );

    int Notify( const phxrpc::HttpRequest & request, phxrpc::HttpResponse * response );

private:
    SearchService & service_;
    phxrpc::DispatcherArgs_t * dispatcher_args_;

public:
    static const phxrpc::HttpDispatcher< SearchDispatcher >::URIFuncMap & GetURIFuncMap();

};

