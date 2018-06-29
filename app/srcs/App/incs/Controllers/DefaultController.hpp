
namespace       App
{
    namespace   Controllers
    {
        class   DefaultController : public Controller
        {
            public:
                virtual     ~DefaultController(void);

            // actions
            public:
                void        indexAction(void);
                void        helloAction(void);
        }
    }
}