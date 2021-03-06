/* search_tool_impl.h

 Generated by phxrpc_pb2tool from search.proto

*/

#pragma once

#include <stdio.h>

#include "phxrpc_search_tool.h"
namespace phxrpc {
    class OptMap;
}

class SearchToolImpl : public SearchTool
{
public:
    SearchToolImpl();
    virtual ~SearchToolImpl();

    virtual int PHXEcho( phxrpc::OptMap & opt_map );

    virtual int Search( phxrpc::OptMap & opt_map );

    virtual int Notify( phxrpc::OptMap & opt_map );

};

