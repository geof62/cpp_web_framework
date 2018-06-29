#include    <type_traits>
#include    "Router/RouteCollection.hpp"
#include    "MVC/ControllerInterface.hpp"

namespace       Framework
{
    namespace   Router
    {
        RouteCollection::RouteCollection()
        {
            this->routes.insert(std::make_pair<std::string, std::list>("/", std::list()));
        }

        RouteCollectionInterface    &Router::add(const std::string &prefix, const RouteCollectionInterface &collection)
        {
            if (this->routes.find(prefix) == std::unordered_map::end)
                this->routes.insert(std::make_pair<std::string, std::list>(prefix, std::list()));
            
            this->routes[prefix].push_back(collection);
        }

        RouteCollectionInterface    &Router::add(const RouteInterface &route)
        {
            this->routes["/"].push_back(route);
        }
        
        template <class T>
        typename std::enable_if<std::is_base_of<Framework::MVC::ControllerInterface, T>::value, void>::type
        RouteCollectionInterface    &Router::add(const std::string &prefix)
        {
            // get the reslt of the method
            // stock it as collection
            // this->add(prefix, collection);
        }
    }
}