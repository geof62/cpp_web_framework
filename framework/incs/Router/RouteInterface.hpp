#ifndef         FRAMEWORK_ROUTER_ROUTE_INTERFACE
# define        FRAMEWORK_ROUTER_ROUTE_INTERFACE

# include       "Router/RouterElement.hpp"

namespace       Framework
{
    namespace   Router
    {
        template <typename T>
        class   RouteInterface : public RouterElement
        {
            public:
                virtual     ~Route(void) {}

            public:
                virtual Route       &get(void) const = 0;
                // TODO
        };
    }
}

#endif