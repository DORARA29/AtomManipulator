// AtomManipulator.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CRobotArmApp:
// �аѾ\��@�����O�� AtomManipulator.cpp
//

class CRobotArmApp : public CWinApp
{
public:
	CRobotArmApp();

// �мg
	public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CRobotArmApp theApp;