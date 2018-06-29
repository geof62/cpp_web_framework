#ifndef         FRAMEWORK_APPLICATION_APPLICATION
# define        FRAMEWORK_APPLICATION_APPLICATION

# include       "Application/Request.hpp"
# include       "Env/Env.hpp"
# include       "Env/ConfigCollection.hpp"

namespace       Framework
{
    namespace   Application
    {
        class   Application
        {
            protected:
                const Env::Env                &env;
                const Env::ConfigCollection   &config;
                Request                       &request;

            public:
                Application(const char const**ae);
                virtual         ~Application(void);

                Application     &run(void);
        };
    }
}

#endif