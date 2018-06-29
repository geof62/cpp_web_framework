#include    "Application/Application.hpp"
#include    "Application/Env/ConfigCalls.hpp"

namespace   Framework
{
    namespace   Application
    {
        Application::Application(const char const **env) 
            : env(*(new Env::Env(env))), 
            config(Config::getConfig()),
            request(*(new Request(*(this->env), *(this->config))))
        {
            
        }

        Application::~Application(void)
        {
            delete &(this->request);
            delete &(this->env);
            delete &(this->config);
        }

        Application         &Application::run(void)
        {

            this->request->run();

            return (*this);
        }
    }
}