///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class RheadPanel
///////////////////////////////////////////////////////////////////////////////
class RheadPanel : public wxPanel
{
private:
	wxBoxSizer* mSizer1;

protected:
	wxStaticText* m_staticText6;
	wxStaticText* mNameText1;
	wxStaticText* mWeightText;
	wxStaticText* mMajorText;
	wxStaticText* mScoreText;

public:

	RheadPanel(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(406, 92), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString);
	~RheadPanel();

};

