#include <wx/wx.h>

class Button : public wxFrame
{
public:
    Button(const wxString& title);

    void onQuit(wxCommandEvent & event);
};