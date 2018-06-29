#ifndef         FRAMEWORK_ENV_CONFIG_COLLECTION
# define        FRAMEWORK_ENV_CONFIG_COLLECTION

# include       <string>
# include       <map>
# include       <variant>

namespace       Framework
{
    namespace   Env
    {
        class   ConfigCollection
        {
            protected:
                std::map <std::string, std::variant<int, float, std::string, bool, ConfigCollection &>> data;

            public:
                ConfigCollection(void);
                virtual     ~ConfigCollection(void);

            public:
                template <typename T>
                ConfigCollection        &add(const &T);

                template <typename T>
                const T                 &get(const std::string &) const;
        };
    }
}

#endif