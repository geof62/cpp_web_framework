#ifndef         FRAMEWORK_APPLICATION_REQUEST
# define        FRAMEWORK_APPLICATION_REQUEST

# include       "Env/Env.hpp"
# include       "Env/ConfigCollection.hpp"

namespace       Framework
{
    namespace   Application
    {
        class   Request
        {
            protected:
                const Env::Env                  &env;
                const Env::ConfigCollection     &conf;

            public:
                Request(const Env::Env &, const Env::ConfigCollection &);
                virtual     ~Request(void);
            // TODO
        }
    }
}

#endif