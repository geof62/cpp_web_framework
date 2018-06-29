#include    "Application/Application.hpp"

int     main(int ac, char **ac, char **ae)
{
    (void)ac;
    (void)av;

    Application::Application        *app;

    app = new Application::Application(ae);
    app->run();
    delete app;

    return (0);
}