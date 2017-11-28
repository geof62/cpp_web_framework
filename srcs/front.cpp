#include	"Framework/Application/Application.hpp"
#include <iostream>
int		main(int ac, char **av, char **ae)
{
	Framework::Application::Application	*app;

	(void)ac;
	(void)av;

	/*TMP*/

	std::cout << "Content-type: text/html" << std::endl << std::endl;
	/*******/


	app = new Framework::Application::Application(&ae);

	delete app;

	return (0);
}