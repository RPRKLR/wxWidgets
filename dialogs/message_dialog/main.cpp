#include "main.h"
#include "message.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

  Message *msgs = new Message(wxT("Messages"));
  msgs->Show(true);

  return true;
}