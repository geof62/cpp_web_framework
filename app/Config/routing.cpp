
namespace Config
{
    const RouteCollectionInterface     &getRouting(void)
    {
        RouteCollection &collection = *(new RouteCollection());

        // Add a route
        collection.add(
            (new Route<App::Controllers::DefaultController>(
                "/",
                &App::Controllers::DefaultController::indexAction))
            ->get());

        // Add a route collection
        collection.add("/", (new RouteCollection())->get()
            .add((new Route<App::Controllers::DefaultController>(
                "/hello",
                &App::Controllers::DefaultController::helloAction))
                ->get())
            ));

        // Add a route collection by including another file
        collection.add("/prefix", getPrefixRoutes());

        // Add a controller reference
        // the controller must implements RoutingControllerInterface
        collection.add<App::Controllers::UserController>("/user");

        // Eventually, Add a module ?
        // the module class declaration must implements RoutingModuleInterface
        // collection.add<ForumModule::ForumModule>("/forum");

        return routes;
    }
}