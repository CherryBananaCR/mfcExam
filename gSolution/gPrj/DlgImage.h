#pragma once
#include "afxdialogex.h"


// DlgImage 대화 상자

class DlgImage : public CDialogEx
{
	DECLARE_DYNAMIC(DlgImage)

public:
	DlgImage(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~DlgImage();


	CWnd* m_pParent;

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DlgImage };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnUpParent();
};
