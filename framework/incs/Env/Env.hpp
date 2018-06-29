#ifndef         FRAMEWORK_ENV_ENV
# define        FRAMEWORK_ENV_ENV

# include       <string>
# include       <map>

namespace       Framework
{
    namespace   Env
    {
        class   Env
        {
            protected:
                static std::string LIST_CONF[];

            public:
                enum ENV_VAR
                { 
                    HTTP_HOST,
                    HTTP_USER_AGENT,
                    HTTP_ACCEPT,
                    HTTP_ACCEPT_LANGUAGE,
                    HTTP_ACCEPT_ENCODING,
                    HTTP_CONNECTION,
                    SERVER_ADDR,
                    SERVER_PORT,
                    SERVER_PROTOCOL,
                    REMOTE_ADDR,
                    REQUEST_SCHEME,
                    CONTEXT_DOCUMENT_ROOT,
                    REQUEST_METHOD,
                    QUERY_STRING,
                    REQUEST_URI,
                    HTTP_PRAGMA,
                    HTTP_CACHE_CONTROL
                };

            protected:
                std::map<std::string, std::string>	data;

            public:
                Env(char ***env);

                virtual		~Env(void);

                const std::string	&get(const std::string &) const;
                const std::string   &get(const ENV_VAR) const;
        };
    }
}

#endif