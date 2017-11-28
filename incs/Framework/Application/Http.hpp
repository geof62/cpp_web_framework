#ifndef		FRAMEWORK_APPLICATION_HTTP_HPP_
# define	FRAMEWORK_APPLICATION_HTTP_HPP_

# include	<string>

namespace		Framework
{
	namespace	Application
	{
		class	Http
		{
		public:
			enum class	DataType
			{
				JSON,
				TEXT,
				FORM_DATA,
				URL_ENCODED
			};

			enum class	Method
			{
				GET,
				POST,
				PUT,
				DELETE,
				PATCH
			};

		};
	}
}

#endif