// DlgImage.cpp: 구현 파일
//

#include "pch.h"
#include "gPrj.h"
#include "afxdialogex.h"
#include "DlgImage.h"


// DlgImage 대화 상자

IMPLEMENT_DYNAMIC(DlgImage, CDialogEx)

DlgImage::DlgImage(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DlgImage, pParent)
{
	m_pParent = pParent;
}

DlgImage::~DlgImage()
{
}

void DlgImage::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DlgImage, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_UP_PARENT, &DlgImage::OnBnClickedBtnUpParent)
END_MESSAGE_MAP()


// DlgImage 메시지 처리기

#include "gPrjDlg.h"
void DlgImage::OnBnClickedBtnUpParent()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	static int n = 100;
	CgPrjDlg* pDlg = (CgPrjDlg*)m_pParent;
	pDlg->callFunc(n++);
}
