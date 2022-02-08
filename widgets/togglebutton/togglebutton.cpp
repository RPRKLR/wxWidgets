#include "togglebutton.h"

ToggleButton::ToggleButton(const wxString& title)
        : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(280, 180))
{
    wxPanel *panel = new wxPanel(this, wxID_ANY);

  colour = new wxColour(0, 0, 0);

  m_tgbutton1 = new wxToggleButton(panel, ID_TGBUTTON1, 
                                   wxT("Red"), wxPoint(20, 20));
  m_tgbutton2 = new wxToggleButton(panel, ID_TGBUTTON2, 
                                   wxT("Green"), wxPoint(20, 70));
  m_tgbutton3 = new wxToggleButton(panel, ID_TGBUTTON3, 
                                   wxT("Blue"), wxPoint(20, 120));

  Connect(ID_TGBUTTON1, wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, 
      wxCommandEventHandler(ToggleButton::onToggleRed));
  Connect(ID_TGBUTTON2, wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, 
      wxCommandEventHandler(ToggleButton::onToggleGreen));
  Connect(ID_TGBUTTON3, wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,  
      wxCommandEventHandler(ToggleButton::onToggleBlue));

  m_panel = new wxPanel(panel, wxID_NEW, wxPoint(150, 20), 
                        wxSize(110, 110), wxSUNKEN_BORDER);
  m_panel->SetBackgroundColour(colour->GetAsString());

}

void ToggleButton::onToggleRed(wxCommandEvent& WXUNUSED(event))
{
    unsigned char green = colour->Green();
    unsigned char blue = colour->Blue();

    if(colour->Red() )
    {
        colour->Set(0, green, blue);
    }else {
        colour->Set(255, green, blue);
    }

    m_panel->SetBackgroundColour(colour->GetAsString());
}

void ToggleButton::onToggleGreen(wxCommandEvent& WXUNUSED(event))
{
  unsigned char red = colour->Red(); 
  unsigned char blue = colour->Blue(); 


  if ( colour->Green() ) {
      colour->Set(red, 0, blue);

  } else { 
      colour->Set(red, 255, blue);
  }

  m_panel->SetBackgroundColour(colour->GetAsString());

}

void ToggleButton::onToggleBlue(wxCommandEvent& WXUNUSED(event))
{
  unsigned char red = colour->Red(); 
  unsigned char green = colour->Green(); 


  if ( colour->Blue() ) {
      colour->Set(red, green, 0);

  } else { 
      colour->Set(red, green, 255);
  }

  m_panel->SetBackgroundColour(colour->GetAsString());
}