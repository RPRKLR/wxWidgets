#include <wx/wx.h>

class OpenFile : public wxFrame 
{
public:
    OpenFile(const wxString& title);

    void onOpen(wxCommandEvent& event);

    wxTextCtrl *tc;
};