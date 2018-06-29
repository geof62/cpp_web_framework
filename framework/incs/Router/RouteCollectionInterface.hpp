#ifndef         FRAMEWORK_ROUTER_ROUTE_COLLECTION_INTERFACE
# define        FRAMEWORK_ROUTER_ROUTE_COLLECTION_INTERFACE

# include       "Router/RouteInterface.hpp"
# include       "Router/RouterElement.hpp"

namespace       Framework
{
    namespace   Router
    {
        class   RouteCollectionInterface : public RouterElement
        {
            public:
                virtual RouteCollectionInterface    &get(void) const = 0;

            public:
                virtual RouteCollectionInterface    &add(const std::string &, const RouteCollectionInterface &) = 0;
                virtual RouteCollectionInterface    &add(const RouteInterface &) = 0;
                template <class T>
                virtual RouteCollectionInterface    &add(const std::string &) = 0;
        };
    }
}

#endif