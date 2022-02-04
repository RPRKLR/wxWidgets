#include <wx/wx.h>

class Toolbar : public wxFrame
{
    public:
        Toolbar(const wxString& title);

        void onQuit(wxCommandEvent & event);

        wxToolBar *toolbar1;
        wxToolBar *toolbar2;
};