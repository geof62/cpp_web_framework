#include        "Env/Env.hpp"

namespace       Framework
{
    namespace   Env
    {
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
                std::string key = tmp.substr(0, tmp.find('='));
                std::string value = tmp.substr(tmp.find('=') + 1);
				this->data.insert(std::pair<std::string, std::string>(key, value));
			}
		}

		Env::~Env(void)
		{
			
		}

		const std::string	&Env::get(const std::string &key) const
		{
			return (this->data.at(key));
        }

		const std::string	&Env::get(const Env::ENV_VAR key) const
		{
			return (this->data.at(Env::LIST_CONF[key]));
        }
    }
}