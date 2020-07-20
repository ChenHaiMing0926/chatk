
// MFCChatKDlg.h: 头文件
//

#pragma once


// CMFCChatKDlg 对话框
class CMFCChatKDlg : public CDialogEx
{
// 构造
public:
	CMFCChatKDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCCHATK_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedAutoBtn();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedSendmsgBtn();
	afx_msg void OnBnClickedAutosendBtn();
	afx_msg void OnBnClickedClearBtn();
	afx_msg void OnEnChangeEdit3();
};
