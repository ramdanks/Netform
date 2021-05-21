///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ReportFrame.h"
#include "RheadPanel.h"

///////////////////////////////////////////////////////////////////////////

ReportFrame::ReportFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
	: wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer(wxVERTICAL);

	m_splitter2 = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D | wxSP_LIVE_UPDATE | wxSP_THIN_SASH);
	m_splitter2->Connect(wxEVT_IDLE, wxIdleEventHandler(ReportFrame::m_splitter2OnIdle), NULL, this);

	m_panel8 = new wxPanel(m_splitter2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_panel8->SetBackgroundColour(wxColour(0, 0, 0));

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer(wxVERTICAL);

	m_filePicker2 = new wxFilePickerCtrl(m_panel8, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE);
	bSizer7->Add(m_filePicker2, 0, wxALL | wxEXPAND, 5);

	m_listBox1 = new wxListBox(m_panel8, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_HSCROLL);
	bSizer7->Add(m_listBox1, 0, wxALL | wxEXPAND, 5);


	m_panel8->SetSizer(bSizer7);
	m_panel8->Layout();
	bSizer7->Fit(m_panel8);
	m_panel9 = new wxPanel(m_splitter2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_panel9->SetBackgroundColour(wxColour(255, 255, 255));

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer(wxVERTICAL);

	m_auinotebook11 = new wxAuiNotebook(m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxAUI_NB_DEFAULT_STYLE);

	bSizer9->Add(m_auinotebook11, 1, wxEXPAND | wxALL, 5);

	auto* p = new RheadPanel(m_auinotebook11);
	m_auinotebook11->AddPage(p, "Test");

	m_panel9->SetSizer(bSizer9);
	m_panel9->Layout();
	bSizer9->Fit(m_panel9);
	m_splitter2->SplitVertically(m_panel8, m_panel9, 0);
	bSizer8->Add(m_splitter2, 1, wxEXPAND, 5);


	this->SetSizer(bSizer8);
	this->Layout();

	this->Centre(wxBOTH);
}

ReportFrame::~ReportFrame()
{
}
