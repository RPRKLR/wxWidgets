#include <wx/wx.h>
#include <wx/menu.h>

// class SimpleMenu : public wxFrame
// {
// public: 
//     SimpleMenu(const wxString& title);

//     void onQiut(wxCommandevent& event);

//     wxMenuBar *menubar;
//     wxMenu *file;
// };

class SubMenu : public wxFrame
{
public:
    SubMenu(const wxString& title);

    void onQuit(wxCommandEvent & event);

    wxMenuBar *menubar;
    wxMenu *file;
    wxMenu *imp;
    wxMenuItem *quit;
};