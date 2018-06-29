#ifndef         FRAMEWORK_ROUTER_ROUTER_ELEMENT
# define        FRAMEWORK_ROUTER_ROUTER_ELEMENT

namespace       Framework
{
    namespace   Router
    {
        class   RouterElement
        {
            public:
                virtual     ~RouterElement(void) {}

            public:
                bool        match(const std::string &) const = 0;
        };
    }
}

#endif