#ifndef		FRAMEWORK_APPLICATION_JSON_RESPONSE_HPP_
# define	FRAMEWORK_APPLICATION_JSON_RESPONSE_HPP_

# include	<string>
# include	"Framework/Application/Response.hpp"

namespace		Framework
{
	namespace	Application
	{
		class	JsonResponse : public Response
		{
		protected:

		public:
			JsonResponse();

			virtual		~JsonResponse(void);

			virtual const std::string	&render(void) const;
		};
	}
}

#endif