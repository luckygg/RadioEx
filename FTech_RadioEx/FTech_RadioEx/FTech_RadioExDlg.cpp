
// FTech_RadioExDlg.cpp : implementation file
//

#include "stdafx.h"
#include "FTech_RadioEx.h"
#include "FTech_RadioExDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFTech_RadioExDlg dialog




CFTech_RadioExDlg::CFTech_RadioExDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CFTech_RadioExDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CFTech_RadioExDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_RADIO1, m_rbtnTest1);
	DDX_Control(pDX, IDC_RADIO2, m_rbtnTest2);
	DDX_Control(pDX, IDC_RADIO3, m_rbtnTest3);
	DDX_Control(pDX, IDC_RADIO4, m_rbtnTest4);
	DDX_Control(pDX, IDC_RADIO5, m_rbtnTest5);
	DDX_Control(pDX, IDC_RADIO6, m_rbtnTest6);
}

BEGIN_MESSAGE_MAP(CFTech_RadioExDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()


// CFTech_RadioExDlg message handlers

BOOL CFTech_RadioExDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	m_rbtnTest1.SetAlignTextRM();
	m_rbtnTest1.SetSizeCheck(30);
	m_rbtnTest1.SetSizeCheckBox(3,3,30,30);
	m_rbtnTest1.SetColorCheck(255,255,255,0);
	m_rbtnTest1.SetColorBoxBorder(255,81,81,81);
	m_rbtnTest1.LoadImageFromFile(_T("babelfish.png"));
	m_rbtnTest1.SetSizeImage(40,3,30,30);
	m_rbtnTest1.SetOffsetText(-10,0);
	m_rbtnTest1.SetText(_T("GDI+ Radio"));
	m_rbtnTest1.SetGroupBegin();
	m_rbtnTest1.SetCheckButton(true);

	m_rbtnTest2.SetAlignTextRM();
	m_rbtnTest2.SetSizeCheck(10);
	m_rbtnTest2.SetSizeCheckBox(3,3,30,30);
	m_rbtnTest2.SetColorCheck(255,255,255,0);
	m_rbtnTest2.LoadImageFromFile(_T("babelfish.png"));
	m_rbtnTest2.SetSizeImage(40,3,30,30);
	m_rbtnTest2.SetOffsetText(-10,0);
	m_rbtnTest2.SetText(_T("GDI+ Radio"));
	m_rbtnTest2.SetGroupEnd();

	CRect rect;
	m_rbtnTest3.GetClientRect(&rect);
	m_rbtnTest3.LoadImageFromFile(_T("check.png"),_T("normal.png"));
	m_rbtnTest3.SetColorChkBkg(255,255,255,255);
	m_rbtnTest3.SetColorUnChkBkg(255,255,255,255);
	m_rbtnTest3.SetSizeImage(0,0,rect.Width()-1,rect.Height()-1);
	m_rbtnTest3.SetGroupBegin();
	m_rbtnTest3.SetCheckButton(true);
	m_rbtnTest4.LoadImageFromFile(_T("check.png"),_T("normal.png"));
	m_rbtnTest4.SetColorChkBkg(255,255,255,255);
	m_rbtnTest4.SetColorUnChkBkg(255,255,255,255);
	m_rbtnTest4.SetSizeImage(0,0,rect.Width()-1,rect.Height()-1);
	m_rbtnTest4.SetGroupEnd();

	m_rbtnTest5.SetAlignTextCM();
	m_rbtnTest5.SetSizeCheck(0);
	m_rbtnTest5.SetSizeCheckBox(0,0,0,0);
	m_rbtnTest5.SetColorBkg(255,RGB(128,128,128),255,RGB(64,64,64));
	m_rbtnTest5.SetText(_T("Color Button 1"));
	m_rbtnTest5.SetGroupBegin();
	m_rbtnTest5.SetCheckButton(true);

	m_rbtnTest6.SetAlignTextCM();
	m_rbtnTest6.SetSizeCheck(0);
	m_rbtnTest6.SetSizeCheckBox(0,0,0,0);
	m_rbtnTest6.SetColorChkBkg(255,RGB(128,128,128));
	m_rbtnTest6.SetText(_T("Color Button 2"));
	m_rbtnTest6.SetGroupEnd();

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CFTech_RadioExDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CFTech_RadioExDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

