#include "../NoMVC/src/Controller.h"
#include "../NoPARSE/src/Parse.h"

int main(int argc, char ** argv)
{
	if (argc > 1)
	{
		// Init Window
		NoMVC::WindowConfig window = {1280, 1080, 60, 1/60, false, GRAY};
		// Init Controller
		std::shared_ptr< NoMVC::Controller > game = std::make_shared< NoMVC::Controller >();
		game->changeWindow(window);
		// Load Assets
		std::string path(argv[1]);
		game->assets = NoMEM::loadAssets(path);
		// Load GUI
		std::shared_ptr< NoGUI::GUIManager > GUIModel = NoGUI::loadManager(path, game->assets);
		// Init View
		std::shared_ptr< NoMVC::View > view = std::make_shared< NoMVC::View >(game.get(), game->getWindow());
		view->addModel(GUIModel);
		// Update Controller
		game->changeScene(view);
		game->currentScene()->update();
		// Run
		int res = game->run();
		
		return res;
	}
	
	return 0;
}