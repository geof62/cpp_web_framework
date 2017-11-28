#ifndef		FRAMEWORK_APPLICATION_ENV_HPP_
# define	FRAMEWORK_APPLICATION_ENV_HPP_

# include	<map>
# include	<string>

namespace		Framework
{
	namespace	Application
	{
		class	Env
		{
		protected:
			static std::string	REQUEST_TYPE_KEY;
			static std::string	LIST_CONF[];

		protected:
			std::map<std::string, std::string>	data;

		public:
			Env(char ***env);

			virtual		~Env(void);

			const std::string	&get(const std::string &) const;
		};
	}
}

#endif
