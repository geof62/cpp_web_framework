#include	"Framework/Application/Env.hpp"

namespace		Framework
{
	namespace	Application
	{
		std::string	Env::REQUEST_TYPE_KEY = "REQUEST_SCHEME";

		std::string	Env::LIST_CONF[] = 
		{
			"HTTP_HOST",
			"HTTP_USER_AGENT",
			"HTTP_ACCEPT",
			"HTTP_ACCEPT_LANGUAGE",
			"HTTP_ACCEPT_ENCODING",
			"HTTP_CONNECTION",
			"SERVER_ADDR",
			"SERVER_PORT",
			"SERVER_PROTOCOL",
			"REMOTE_ADDR",
			"REQUEST_SCHEME",
			"CONTEXT_DOCUMENT_ROOT",
			"REQUEST_METHOD",
			"QUERY_STRING",
			"REQUEST_URI",
			"HTTP_PRAGMA",
			"HTTP_CACHE_CONTROL"
		};

		Env::Env(char ***env)
		{
			std::string	tmp;

			for (int i = 0; env[0][i]; ++i)
			{
				tmp = std::string(env[0][i]);
				for (int j = 0; Env::LIST_CONF[j] != ""; ++j)
				{
					if (tmp.substr(0, Env::LIST_CONF[j].size() + 1) == Env::LIST_CONF[j] + "=")
					{
						this->data.insert(std::pair<std::string, std::string>(Env::LIST_CONF[j], tmp.substr(Env::LIST_CONF[j].size() + 1)));
						break;
					}
				}
			}
		}

		Env::~Env(void)
		{
			
		}

		const std::string	&Env::get(const std::string &key) const
		{
			return (this->data.at(key));
		}
	}
}