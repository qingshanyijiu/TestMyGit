
// TestGitDlg.h : header file
//

#pragma once


// CTestGitDlg dialog
class CTestGitDlg : public CDialogEx
{
// Construction
public:
	CTestGitDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_TESTGIT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
<<<<<<< HEAD
	afx_msg void OnBnClickedButton1();
=======
	afx_msg void OnBnClickedButtonTestshow();
>>>>>>> 8566e98425354cc220dead13922e43d5a591fe3d
};
