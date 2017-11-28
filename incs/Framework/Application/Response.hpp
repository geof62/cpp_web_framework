#ifndef		FRAMEWORK_APPLICATION_RESPONSE_HPP_
# define	FRAMEWORK_APPLICATION_RESPONSE_HPP_

# include	<string>
# include	"Framework/Application/Env.hpp"

namespace		Framework
{
	namespace	Application
	{
		class	Response
		{
		protected:

		public:
			Response();

			virtual		~Response(void);

			virtual const std::string	&render(void) const = 0;
		};
	}
}

#endif