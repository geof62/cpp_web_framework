#include	"Framework/Router/RouteCollection.hpp"
#include	"Application/Controller/DefaultController.hpp"

using namespace Framework::Router;
using namespace Framework::Application;

const RouteCollection &router_config(void)
{
	auto &collection = *(new RouteCollection());
	
	collection.add(dynamic_cast<Route<Controller> &>(
		Route<Application::Controller::DefaultController>(
			"/",
			&Application::Controller::DefaultController::indexAction).g()));

	collection.add(dynamic_cast<Route<Controller> &>(
		Route<Application::Controller::DefaultController>(
			"/pages/{page}",
			{
				(RouteParameters) {.name = "page",.regex = "[a-z]"}
			},
			&Application::Controller::DefaultController::pageAction)
				.name("get_page")
				.locale("fr")));

	return (collection);
}
