#ifndef		FRAMEWORK_ROUTER_ROUTER_HPP_
# define	FRAMEWORK_ROUTER_ROUTER_HPP_

# include	"Framework/Router/RouteCollection.hpp"

namespace		Framework
{
	namespace	Router
	{
		class	Router
		{
		public:
			typedef	const RouteCollection &(*ROUTER_COMPONENT)(void);
			 
		protected:

		public:
			virtual		~Router(void);

			void	add(Router::ROUTER_COMPONENT);
		};
	}
}

#endif