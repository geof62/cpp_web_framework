#include	"Framework/Application/Application.hpp"

namespace		Framework
{
	namespace	Application
	{
		Application::Application(char ***env)
		{
			this->env = new Env(env);
			this->request = new Request(*(this->env));
		}

		Application::~Application(void)
		{
			delete this->env;
		}
	}
}