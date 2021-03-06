//*************************************************************************
// Dlg.h 2016-8-4 17:46
// Author: Stonexin
// Purpose: 
//
//*************************************************************************

#ifndef __NONAME_H__
#define __NONAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/filepicker.h>
#include <wx/choice.h>
#include <wx/listbox.h>
#include <wx/dialog.h>
#include <wx/statline.h>

#include "ProtocolManager.h"
///////////////////////////////////////////////////////////////////////////

class NetWorkThread;

enum TOOLS_ID_LIST
{
	WX_ID_DIR_PICKER = wxID_HIGHEST+1,
	WX_ID_MSG_CHOICE,
	WX_ID_BTN_LOGIN,	
	WX_ID_BTN_SEND,
};

struct FieldCtrl
{
	int		nIndex = 0;
	wxStaticText* pStaticTxt = nullptr;
	wxTextCtrl*	  pTextCtrl = nullptr;

	void Clear()
	{
		if (pStaticTxt)
		{
			pStaticTxt->SetLabelText("");
		}

		if (pTextCtrl)
		{
			pTextCtrl->SetValue("");
		}
	}

	void Show( bool bShow)
	{
		if (pStaticTxt)
		{
			pStaticTxt->Show(bShow);
		}

		if (pTextCtrl)
		{
			pTextCtrl->Show(bShow);
		}
	}

	void Enable( bool bEnable)
	{
		if (pStaticTxt)
		{
			pStaticTxt->Enable(bEnable);
		}

		if (pTextCtrl)
		{
			pTextCtrl->Enable(bEnable);
		}
	}
};


///////////////////////////////////////////////////////////////////////////////
/// Class DBConvertDlg
///////////////////////////////////////////////////////////////////////////////
class Dlg : public wxDialog
{

protected:
	void OnClose(wxCloseEvent& /*event*/);
	void InitCtrls(const wxString& dir);

	void OnProtoDirSelected(wxFileDirPickerEvent& event);
	void OnMsgSelected(wxCommandEvent& event);

	void InitProtocolField( const wxString& strMsgName );

	void OnBtnLogin(wxCommandEvent& event);
	void OnBtnSend(wxCommandEvent& event);
	void OnNetWorkMsg(wxCommandEvent& event);


public:

	Dlg(wxWindow* parent, 
		wxWindowID id = wxID_ANY, 
		const wxString& title = wxEmptyString, 
		const wxPoint& pos = wxDefaultPosition, 
		const wxSize& size = wxSize(-1, -1), 
		long style = wxDEFAULT_DIALOG_STYLE | wxMAXIMIZE_BOX | wxRESIZE_BORDER);
	~Dlg();

	wxDECLARE_NO_COPY_CLASS(Dlg);
	wxDECLARE_EVENT_TABLE();

private:
	std::vector<FieldCtrl>	m_FieldList;
	NetWorkThread*			m_pNetWorkThrd;

private:
	wxStaticText* m_staticText1;
	wxTextCtrl* m_pServerIPCtrl;
	wxStaticText* m_staticText2;
	wxTextCtrl* m_pServerPortCtrl;
	wxStaticText* m_staticText3;
	wxTextCtrl* m_pUserNameCtrl;
	wxStaticText* m_staticText4;
	wxTextCtrl* m_pPwdCtrl;
	wxButton* m_pBtnLogin;
	wxStaticText* m_staticText5;
	wxDirPickerCtrl* m_pDirCtrl;
	wxStaticText* m_staticText6;
	wxChoice* m_pProtoMsgChoice;
	wxButton* m_button3;
	wxListBox* m_pListBoxCtrl;
	wxFlexGridSizer* m_pFGSizer;
	wxTextCtrl*	m_pMsgIDCtrl;
};

#endif //__NONAME_H__
