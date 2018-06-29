#ifndef         FRAMEWORK_ROUTER_ROUTE
# define        FRAMEWORK_ROUTER_ROUTE

# include       "Router/RouteInterface.hpp"

namespace       Framework
{
    namespace   Router
    {
        struct		RouteParameters
		{
			const char	*name;
			const char	*regex;
		};

        template <typename T>
        class   Route : public RouteInterface<T>
        {
		    public:
			    typedef const Framework::Application::Response &(T::* PTR_ACTION)(void);

            public:
                Route(const std::string &route, Route::PTR_ACTION action);
			    Route(const std::string &route, std::initializer_list<RouteParameters> params, Route::PTR_ACTION action);
                virtual     ~Route(void);

            public:
                virtual Route       &get(void) const;
                // TODO
        };
    }
}

#endif