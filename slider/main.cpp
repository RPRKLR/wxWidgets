#include "main.h"
#include "slider.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

    Slider *slider = new Slider(wxT("Slider"));
    slider->Show(true);

    return true;
}