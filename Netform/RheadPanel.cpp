///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "RheadPanel.h"

///////////////////////////////////////////////////////////////////////////

RheadPanel::RheadPanel(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name) : wxPanel(parent, id, pos, size, style, name)
{
	this->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	this->SetBackgroundColour(wxColour(37, 37, 37));

	mSizer1 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText6 = new wxStaticText(this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText6->Wrap(-1);
	m_staticText6->SetFont(wxFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Roboto")));
	m_staticText6->SetForegroundColour(wxColour(147, 209, 255));

	bSizer9->Add(m_staticText6, 0, wxALIGN_CENTER_VERTICAL, 5);


	mSizer1->Add(bSizer9, 1, wxALL | wxEXPAND, 7);

	wxBoxSizer* mSizerH1;
	mSizerH1 = new wxBoxSizer(wxHORIZONTAL);

	mNameText1 = new wxStaticText(this, wxID_ANY, wxT("Nama - NPM"), wxDefaultPosition, wxDefaultSize, 0);
	mNameText1->Wrap(-1);
	mNameText1->SetForegroundColour(wxColour(240, 240, 240));

	mSizerH1->Add(mNameText1, 0, wxALIGN_CENTER_VERTICAL, 5);


	mSizerH1->Add(0, 0, 1, wxEXPAND, 5);

	mWeightText = new wxStaticText(this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	mWeightText->Wrap(-1);
	mWeightText->SetForegroundColour(wxColour(240, 240, 240));

	mSizerH1->Add(mWeightText, 0, wxALIGN_CENTER_VERTICAL, 5);


	mSizer1->Add(mSizerH1, 1, wxEXPAND | wxLEFT | wxRIGHT, 7);

	wxBoxSizer* mSizerH2;
	mSizerH2 = new wxBoxSizer(wxHORIZONTAL);

	mMajorText = new wxStaticText(this, wxID_ANY, wxT("Angkatan"), wxDefaultPosition, wxDefaultSize, 0);
	mMajorText->Wrap(-1);
	mMajorText->SetForegroundColour(wxColour(240, 240, 240));

	mSizerH2->Add(mMajorText, 0, wxALIGN_CENTER_VERTICAL, 5);


	mSizerH2->Add(0, 0, 1, wxEXPAND, 5);

	mScoreText = new wxStaticText(this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	mScoreText->Wrap(-1);
	mScoreText->SetFont(wxFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Roboto")));
	mScoreText->SetForegroundColour(wxColour(70, 255, 80));

	mSizerH2->Add(mScoreText, 0, wxALIGN_CENTER_VERTICAL, 5);


	mSizer1->Add(mSizerH2, 1, wxALL | wxEXPAND, 7);


	this->SetSizer(mSizer1);
	this->Layout();
}

RheadPanel::~RheadPanel()
{
}
