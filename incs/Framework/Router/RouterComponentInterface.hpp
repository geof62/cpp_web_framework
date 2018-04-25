#ifndef		FRAMEWORK_ROUTER_ROUTER_COMPONENT_HPP_
# define	FRAMEWORK_ROUTER_ROUTER_COMPONENT_HPP_

# include   "Framework/Router/RouteMatched.hpp"

namespace       Framework
{
    namespace   Router
    {
        class   RouterComponentInterface
        {
            public:
                virtual     ~RouterComponentInterface(void) {};

            public:
                virtual const RouteMatched      *match(const std::string &) const = 0;
        };
    }
}

#endif