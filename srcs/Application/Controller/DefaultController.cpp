#include	"Application/Controller/DefaultController.hpp"
#include	"Framework/Application/JsonResponse.hpp"

namespace		Application
{
	namespace	Controller
	{
		const Framework::Application::Response	&DefaultController::indexAction(void)
		{
			this->getRequest().dataType(Framework::Application::Http::DataType::JSON);

			auto &resp = *(new Framework::Application::JsonResponse());
			return (resp);
		}
	}
}