#ifndef		FRAMEWORK_ROUTER_ROUTE_COLLECTION_HPP_
# define	FRAMEWORK_ROUTER_ROUTE_COLLECTION_HPP_

# include	<map>
# include	<vector>
# include	"Framework/Router/Route.hpp"
# include	"Framework/Application/Controller.hpp"
# include 	"Framework/Router/RouterComponentInterface.hpp"

namespace		Framework
{
	namespace	Router
	{
		class	RouteCollection : public RouterComponentInterface
		{
		protected:
			std::string															prefix = "";
			std::map<std::string, Route<Framework::Application::Controller> *>	routes;
			std::vector<RouteCollection *>										collections;

		public:
			RouteCollection(void);
			RouteCollection(const std::string &prefix);

			RouteCollection	&add(const Route<Framework::Application::Controller> &);
			RouteCollection	&collection(const RouteCollection &);

            virtual const RouteMatched      *match(const std::string &) const;
		};
	}
}

#endif