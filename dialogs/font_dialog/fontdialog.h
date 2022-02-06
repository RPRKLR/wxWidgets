#include <wx/wx.h>

class ChangeFont : public wxFrame
{
public:
    ChangeFont(const wxString& title);

    void onOpen(wxCommandEvent& event);

    wxStaticText *st;
};

const int ID_FONTDIALOG = 1;