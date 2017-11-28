#ifndef		DEFAULT_CONTROLLER_HPP_
# define	DEFAULT_CONTROLLER_HPP_

# include	"Framework/Application/Controller.hpp"

namespace		Application
{
	namespace	Controller
	{
		class DefaultController : public Framework::Application::Controller
		{
		public:
			const Framework::Application::Response	&indexAction(void);
			const Framework::Application::Response	&pageAction(void);
		};
	}
}

#endif