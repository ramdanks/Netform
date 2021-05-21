#include <wx/wx.h>
#include "ReportFrame.h"

class App : public wxApp
{
public:
	virtual bool OnInit() override
	{
		auto* f = new ReportFrame(nullptr);
		f->Show();
		return true;
	}
};

wxIMPLEMENT_APP(App);