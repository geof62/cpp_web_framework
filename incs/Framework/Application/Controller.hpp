#ifndef		FRAMEWORK_APPLICATION_CONTROLLER_HPP_
# define	FRAMEWORK_APPLICATION_CONTROLLER_HPP_

# include	"Framework/Application/Response.hpp"
# include	"Framework/Application/Request.hpp"

namespace		Framework
{
	namespace	Application
	{
		class	Controller
		{
		private:
			Request		*request;

		protected:
			Request		&getRequest(void) const;

		public:

		};
	}
}

#endif