
// FTech_RadioExDlg.h : header file
//

#pragma once

#include "RadioEx.h"

// CFTech_RadioExDlg dialog
class CFTech_RadioExDlg : public CDialogEx
{
// Construction
public:
	CFTech_RadioExDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_FTECH_RADIOEX_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CRadioEx m_rbtnTest1;
	CRadioEx m_rbtnTest2;
	CRadioEx m_rbtnTest3;
	CRadioEx m_rbtnTest4;
	CRadioEx m_rbtnTest5;
	CRadioEx m_rbtnTest6;
};
