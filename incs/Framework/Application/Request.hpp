#ifndef		FRAMEWORK_APPLICATION_REQUEST_HPP_
# define	FRAMEWORK_APPLICATION_REQUEST_HPP_

# include	<string>
# include	<map>
# include	"Framework/Application/Env.hpp"
# include	"Framework/Application/Http.hpp"

namespace		Framework
{
	namespace	Application
	{
		class	Request
		{
		protected:
			Http::DataType						type = Http::DataType::URL_ENCODED;
			bool								data_read = false;
			std::map<std::string, std::string>	data;
			Env									*env = NULL;
			Http::Method						method = Http::Method::GET;

		public:
			Request(const Env &);

			virtual		~Request(void);

			void		dataType(Http::DataType);

		protected:
			void				parseQueryData(void);
			const std::string	&getUri(void) const;
			Http::Method		getMethod(void) const;
			const std::string	&get(const std::string &);
		};
	}
}

#endif