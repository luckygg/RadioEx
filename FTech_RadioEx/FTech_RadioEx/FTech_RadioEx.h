
// FTech_RadioEx.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CFTech_RadioExApp:
// See FTech_RadioEx.cpp for the implementation of this class
//

class CFTech_RadioExApp : public CWinApp
{
public:
	CFTech_RadioExApp();

	ULONG_PTR m_gdiplusToken;
// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CFTech_RadioExApp theApp;