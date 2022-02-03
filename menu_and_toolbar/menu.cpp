#include "menu.h"

// SimpleMenu::SimpleMenu(const wxString& title)
//         : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(280,180))
// {
//     menubar = new wxMenuBar;
//     file = new wxMenu;
//     file->Append(wxID_EXIT, wxT("&Quit"));
//     menubar->Append(file, wxT("&File"));
//     SetmenuBar(menubar);

//     Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED,
//         wxCommandEventHandler(SimpleMenu::onQiut));
//     Centre();
// }

// void SimpleMenu::onQiut(wxCommandEvent& WXUNUSED(event))
// {
//     Close(true);
// }

SubMenu::SubMenu(const wxString& title)
        : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(280,180))
{
    menubar = new wxMenuBar;
    file = new wxMenu;
    file->Append(wxID_ANY, wxT("&New"));
    file->Append(wxID_ANY, wxT("&Open"));
    file->Append(wxID_ANY, wxT("&Save"));
    file->AppendSeparator();

    imp = new wxMenu;
    imp->Append(wxID_ANY, wxT("Import newsfeed list..."));
    imp->Append(wxID_ANY, wxT("Import bookmarks..."));
    imp->Append(wxID_ANY, wxT("Import Mail..."));

    file->AppendSubMenu(imp, wxT("I&mport"));

    quit = new wxMenuItem(file, wxID_EXIT, wxT("&Quit\t Ctrl+W"));
    file->Append(quit);

    menubar->Append(file, wxT("&File"));
    SetMenuBar(menubar);

    Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED,
        wxCommandEventHandler(SubMenu::onQuit));
        Centre();
}

void SubMenu::onQuit(wxCommandEvent& WXUNUSED(event))
{
    Close(true);
}
