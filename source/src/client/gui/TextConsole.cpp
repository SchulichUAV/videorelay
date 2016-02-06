// Text console with clear button and context menu
#include "TextConsole.h"

TextConsole::TextConsole(wxWindow *parent, wxWindowID id)
    : wxTextCtrl(parent, id, "...",
        wxDefaultPosition, wxSize(200, 150),
        wxNO_BORDER | wxTE_MULTILINE)
{
}