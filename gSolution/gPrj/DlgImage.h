#pragma once
#include "afxdialogex.h"

#define COLOR_RED RGB(0xff, 0, 0)
#define COLOR_GREEN RGB(0x00, 0xff, 0x00)
#define MAX_POINT 100

// DlgImage 대화 상자

class DlgImage : public CDialogEx
{
	DECLARE_DYNAMIC(DlgImage)

public:
	DlgImage(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~DlgImage();

	CImage m_image;
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
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	int m_nDataCount = 0;
	CPoint m_ptData[MAX_POINT];

private:
	void InitImage();
	void drawData(CDC* pDC);
};
