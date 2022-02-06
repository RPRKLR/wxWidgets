#include "main.h"
#include "openfile.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

    OpenFile *open = new OpenFile(wxT("Openfile"));
    open->Show(true);

    return true;
}