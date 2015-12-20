// Robot ArmDlg.h : ���Y��
//

#pragma once
#include "OpenGL_Model\OpenGLControl.h"

#include "afxcmn.h"
#include "afxwin.h"

#include <time.h>


// CRobotArmDlg ��ܤ��
class CRobotArmDlg : public CDialog
{
// �غc
public:
	CRobotArmDlg(CWnd* pParent = NULL);	// �зǫغc�禡

// ��ܤ�����
	enum { IDD = IDD_ROBOTARM_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �䴩

	CEdit m_edCtrl_NumPts;
	CEdit m_edCtrl_X;
	CEdit m_edCtrl_Y;
	CEdit m_edCtrl_Z;
	CEdit m_edCtrl_RX;
	CEdit m_edCtrl_RY;
	CEdit m_edCtrl_RZ;

	CEdit m_edCtrl_Fx;
	CEdit m_edCtrl_Fy;
	CEdit m_edCtrl_Fz;
	CEdit m_edCtrl_Mx;
	CEdit m_edCtrl_My;
	CEdit m_edCtrl_Mz;

// �{���X��@
protected:
	HICON m_hIcon;

	// ���ͪ��T�������禡
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	BOOL *CheckDrawGround;
	
	CButton DrawEE_Axis;
	CButton Motor_Action_Btn;
	CButton Robot_Mode_Btn;

	int Robot_Mode;

public:
	afx_msg void OnBnClickedCheckDrawground();
	afx_msg void OnBnClickedCheckMotor();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnEnChangeEditNumpts();
	afx_msg void OnEnChangeEditX();
	afx_msg void OnEnChangeEditY();
	afx_msg void OnEnChangeEditZ();
	afx_msg void OnEnChangeEditRx();
	afx_msg void OnEnChangeEditRy();
	afx_msg void OnEnChangeEditRz();
	afx_msg void OnStnClickedStatus();
	afx_msg void OnBnClickedMrvic();
	afx_msg void OnBnClickedCheck2();
	afx_msg void OnBnClickedCheckDrawrealarm();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedCheck3();

	afx_msg void OnBnClickedRobotMode();
};
