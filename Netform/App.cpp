#include <wx/wx.h>

class App : public wxApp
{
public:
	virtual bool OnInit() override
	{
		wxDialog d(nullptr, wxID_ANY, "Hello World");
		d.ShowModal();
		return false;
	}
};

wxIMPLEMENT_APP(App);