#ifndef		FRAMEWORK_ROUTER_ROUTER_HPP_
# define	FRAMEWORK_ROUTER_ROUTER_HPP_

# include	"Framework/Router/RouteCollection.hpp"
# include 	"Framework/Router/RouterComponentInterface.hpp"

namespace		Framework
{
	namespace	Router
	{
		class	Router
		{
		public:
			typedef	const RouteCollection &(* )(void);
			 
		protected:

		public:
			virtual		~Router(void);

			void	add(const RouterComponentInterface &);
		};
	}
}

#endif