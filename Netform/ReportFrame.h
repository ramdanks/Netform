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
#include <wx/filepicker.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/listbox.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/aui/auibook.h>
#include <wx/splitter.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class ReportFrame
///////////////////////////////////////////////////////////////////////////////
class ReportFrame : public wxFrame
{
private:

protected:
	wxSplitterWindow* m_splitter2;
	wxPanel* m_panel8;
	wxFilePickerCtrl* m_filePicker2;
	wxListBox* m_listBox1;
	wxPanel* m_panel9;
	wxAuiNotebook* m_auinotebook11;

public:

	ReportFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Netform - Report"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500, 300), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~ReportFrame();

	void m_splitter2OnIdle(wxIdleEvent&)
	{
		m_splitter2->SetSashPosition(0);
		m_splitter2->Disconnect(wxEVT_IDLE, wxIdleEventHandler(ReportFrame::m_splitter2OnIdle), NULL, this);
	}

};

