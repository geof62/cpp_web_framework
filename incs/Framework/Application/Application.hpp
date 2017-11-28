#ifndef		FRAMEWORK_APPLICATION_APPLICATION_HPP_
# define	FRAMEWORK_APPLICATION_APPLICATION_HPP_

# include	"Framework/Application/Env.hpp"
# include	"Framework/Application/Request.hpp"
# include	"Framework/Application/Response.hpp"

namespace		Framework
{
	namespace	Application
	{
		class	Application
		{
		protected:
			const Env	*env;
			Request		*request;

		public:
			Application(char ***env);

			virtual		~Application(void);
		};
	}
}

#endif
