#include "main.h"
#include "menu.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    //SimpleMenu *menu = new SimpleMenu(wxT("Simple Menu"));
    //menu->Show(true);

    SubMenu *smenu = new SubMenu(wxT("Submenu"));
    smenu->Show(true);

    return true;
}