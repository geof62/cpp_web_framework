#ifndef		FRAMEWORK_ROUTER_ROUTE_HPP_
# define	FRAMEWORK_ROUTER_ROUTE_HPP_

# include	<string>
# include	"Framework/Application/Response.hpp"
# include 	"Framework/Router/RouterComponentInterface.hpp"

namespace		Framework
{
	namespace	Router
	{
		struct		RouteParameters
		{
			const char	*name;
			const char	*regex;
		};

		template <typename T>
		class	Route : public RouterComponentInterface
		{
		public:
			typedef const Framework::Application::Response &(T::* PTR_ACTION)(void);

		protected:
			
		public:
			Route(const std::string &route, Route::PTR_ACTION action);
			Route(const std::string &route, std::initializer_list<RouteParameters> params, Route::PTR_ACTION action);

			Route	&name(const std::string &);
			Route	&locale(const std::string &);

			// return it-self.
			Route	&g(void) const;

            virtual const RouteMatched      *match(const std::string &) const;

			virtual ~Route(void);
		};
	}
}

#endif