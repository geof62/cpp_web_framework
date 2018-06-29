#ifndef         FRAMEWORK_ROUTER_ROUTE_COLLECTION
# define        FRAMEWORK_ROUTER_ROUTE_COLLECTION

# include       <unordered_map>
# include       <list>
# include       "Router/RouteCollectionInterface.hpp"
# include       "Router/RouterElement.hpp"

namespace       Framework
{
    namespace   Router
    {
        class   RouteCollection : public RouteCollectionInterface
        {
            protected:
                std::unordered_map<std::string, std::list<RouterElement &>> routes;

            public:
                RouteCollection();
                virtual     ~RouteCollection(void);

            public:
                virtual RouteCollectionInterface    &get(void) const;

            public:
                virtual RouteCollectionInterface    &add(const std::string &, const RouteCollectionInterface &);
                virtual RouteCollectionInterface    &add(const RouteInterface &);
                template <class T>
                virtual RouteCollectionInterface    &add(const std::string &);
        };
    }
}

#endif