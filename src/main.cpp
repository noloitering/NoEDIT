#include "../NoMEM/src/NoMEM.h"
#include "../NoGUI/src/GUI.h"
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
		// Init Assets
		std::shared_ptr< NoMEM::MEMManager > assets = std::make_shared< NoMEM::MEMManager >();
		// Load Assets
		std::shared_ptr< NoGUI::GUIManager > GUIModel = NoGUI::loadManager(std::string(argv[1]), assets);
//		std::shared_ptr< NoGUI::Page > pg = NoGUI::loadPage(std::string(argv[1]), assets);
		game->assets = *(assets.get());
		// Init Models
//		std::shared_ptr< NoGUI::GUIManager > GUIModel = std::make_shared< NoGUI::GUIManager >(pg);
		// Init View
		std::shared_ptr< NoMVC::View > view = std::make_shared< NoMVC::View >(game.get(), game->getWindow());
		view->addModel(GUIModel);
		// Update Controller
		game->changeScene(view);
//		for (std::shared_ptr< NoGUI::Element > elem : pg->getElements())
//		{
//			NoGUI::CDropDown dropdown = elem->getComponent< NoGUI::CDropDown >();
//			if ( dropdown.owned )
//			{
//				GUIModel->addPage(dropdown.options);
//			}
//		}
		game->currentScene()->update();
		// Run
		int res = game->run();
		
		return res;
	}
	
	return 0;
}