
namespace       App
{
    namespace   Controllers
    {
        class   UserController : public Controller, public RoutingControllerInterface
        {
            public:
                virtual ~UserController(void);

            // routing
            public:
                virtual const RouteCollectionInterface   &controllerRoutes(void) const;
        }
    }
}