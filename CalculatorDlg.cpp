// CalculatorDlg.cpp: 实现文件
#include "pch.h"
#include "framework.h"
#include "Calculator.h"
#include "CalculatorDlg.h"
#include "afxdialogex.h"
#define pi 3.1415926535898
#define std_angle (pi/180)
#ifdef _DEBUG
#define new DEBUG_NEW
#endif
// 用于应用程序“关于”菜单项的 CAboutDlg 对话框
class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
// 实现
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}
void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}
BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CAboutDlg::OnBnClickedOk)
END_MESSAGE_MAP()
// CZhCalculatorDlg 对话框
CZhCalculatorDlg::CZhCalculatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ZHCALCULATOR_DIALOG, pParent),mStr(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}
void CZhCalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, mStr);
	DDX_Text(pDX, IDC_EDIT2, mStr1);
	DDX_Text(pDX, IDC_EDIT3, mStr2);
	DDX_Text(pDX, IDC_EDIT4, mStr3);
	DDX_Text(pDX, IDC_EDIT5, mStr4);
	DDX_Text(pDX, IDC_EDIT6, mStr5);
	DDX_Text(pDX, IDC_EDIT7, mStr6);
	DDX_Text(pDX, IDC_EDIT8, mStr7);
	DDX_Text(pDX, IDC_EDIT9, mStr8);
	DDX_Text(pDX, IDC_EDIT10, mStr9);
	DDX_Text(pDX, IDC_EDIT11, mStr10);
}
BEGIN_MESSAGE_MAP(CZhCalculatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_dot, &CZhCalculatorDlg::OnBnClickedButtondot)
	ON_BN_CLICKED(IDC_BUTTON_chu, &CZhCalculatorDlg::OnBnClickedButtonchu)
	ON_BN_CLICKED(IDC_BUTTON_back, &CZhCalculatorDlg::OnBnClickedButtonback)
	ON_BN_CLICKED(IDC_BUTTON_clear, &CZhCalculatorDlg::OnBnClickedButtonclear)
	ON_BN_CLICKED(IDC_BUTTON_ngenhaox, &CZhCalculatorDlg::OnBnClickedButtonngenhaox)
	ON_BN_CLICKED(IDC_BUTTON_nx, &CZhCalculatorDlg::OnBnClickedButtonnx)
	ON_BN_CLICKED(IDC_BUTTON_3genx, &CZhCalculatorDlg::OnBnClickedButton3genx)
	ON_BN_CLICKED(IDC_BUTTON_x3, &CZhCalculatorDlg::OnBnClickedButtonx3)
	ON_BN_CLICKED(IDC_BUTTON_2genx, &CZhCalculatorDlg::OnBnClickedButton2genx)
	ON_BN_CLICKED(IDC_BUTTON_x2, &CZhCalculatorDlg::OnBnClickedButtonx2)
	ON_BN_CLICKED(IDC_BUTTON_jiecheng, &CZhCalculatorDlg::OnBnClickedButtonjiecheng)
	ON_BN_CLICKED(IDC_BUTTON_mod, &CZhCalculatorDlg::OnBnClickedButtonmod)
	ON_BN_CLICKED(IDC_BUTTON7, &CZhCalculatorDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CZhCalculatorDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CZhCalculatorDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON_lnx, &CZhCalculatorDlg::OnBnClickedButtonlnx)
	ON_BN_CLICKED(IDC_BUTTON_sinx, &CZhCalculatorDlg::OnBnClickedButtonsinx)
	ON_BN_CLICKED(IDC_BUTTON4, &CZhCalculatorDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CZhCalculatorDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CZhCalculatorDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON_cheng, &CZhCalculatorDlg::OnBnClickedButtoncheng)
	ON_BN_CLICKED(IDC_BUTTON_lognx, &CZhCalculatorDlg::OnBnClickedButtonlognx)
	ON_BN_CLICKED(IDC_BUTTON_cosx, &CZhCalculatorDlg::OnBnClickedButtoncosx)
	ON_BN_CLICKED(IDC_BUTTON1, &CZhCalculatorDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CZhCalculatorDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON_jian, &CZhCalculatorDlg::OnBnClickedButtonjian)
	ON_BN_CLICKED(IDC_BUTTON_ex, &CZhCalculatorDlg::OnBnClickedButtonex)
	ON_BN_CLICKED(IDC_BUTTON_tanx, &CZhCalculatorDlg::OnBnClickedButtontanx)
	ON_BN_CLICKED(IDC_BUTTON_0, &CZhCalculatorDlg::OnBnClickedButton0)
	ON_BN_CLICKED(IDC_BUTTON_dengyu, &CZhCalculatorDlg::OnBnClickedButtondengyu)
	ON_BN_CLICKED(IDC_BUTTON_jia, &CZhCalculatorDlg::OnBnClickedButtonjia)
	ON_BN_CLICKED(IDC_BUTTON3, &CZhCalculatorDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON_clear2, &CZhCalculatorDlg::OnBnClickedButtonclear2)
	ON_BN_CLICKED(IDC_BUTTON_zuokuo, &CZhCalculatorDlg::OnBnClickedButtonzuokuo)
	ON_BN_CLICKED(IDC_BUTTON_youkuo, &CZhCalculatorDlg::OnBnClickedButtonyoukuo)
	ON_BN_CLICKED(IDC_BUTTON_ms, &CZhCalculatorDlg::OnBnClickedButtonms)
	ON_BN_CLICKED(IDC_BUTTON_mC, &CZhCalculatorDlg::OnBnClickedButtonmc)
	ON_BN_CLICKED(IDC_BUTTON_fn, &CZhCalculatorDlg::OnBnClickedButtonfn)
END_MESSAGE_MAP()
// CZhCalculatorDlg 消息处理程序
BOOL CZhCalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// 将编辑框和成员变量关联起来
	m_editInput.Attach(GetDlgItem(IDC_EDIT1)->m_hWnd);

	// 将“关于...”菜单项添加到系统菜单中。
	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);
	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}
	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标
	// TODO: 在此添加额外的初始化代码
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}
void CZhCalculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}
// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。
void CZhCalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文
		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);
		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;
		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}
//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CZhCalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
void CAboutDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
void CZhCalculatorDlg::SaveFirstValue()
{
	UpdateData(TRUE);
	mNum1 = _wtof(mStr);
	mTempStr = mStr;
	mStr = L"";
	UpdateData(FALSE);
}
void CZhCalculatorDlg::Calculator()
{
	UpdateData(TRUE);
	mNum2 = _wtof(mStr);
	double result = 0.0f;

	switch (mFlag)
	{
	case FLAG_JIA:						//加  
		result = mNum1 + mNum2;
		mTempStr = mTempStr + _T("+") + mStr + _T("=");
		break;
	case FLAG_JIAN:						//减 
		result = mNum1 - mNum2;
		mTempStr = mTempStr + _T("-") + mStr + _T("=");
		break;
	case FLAG_CHENG:					//乘  
		result = mNum1 * mNum2;
		mTempStr = mTempStr + _T("x") + mStr + _T("=");
		break;
	case FLAG_CHU:						//除  
		if (mNum2 == 0.0f)
		{
			result = mNum1;
			mTempStr = _T("---除数不能为0！！！---");
		}
		else
		{
			result = mNum1 / mNum2;
			mTempStr = mTempStr + _T("/") + mStr + _T("=");
		}
		break;
	case FLAG_NFANG:					//n方
		result = pow(mNum1, mNum2);
		mTempStr = mTempStr + _T("^") + mStr + _T("=");
		break;
	case FLAG_KAINFANG:					//开n方
		result = pow(mNum1, 1.0/mNum2);
		mTempStr = mStr + _T("√") + mTempStr + _T("=");
		break;
	case FLAG_MOD:						//mod
		result = (int)mNum1 % (int)mNum2;
		mTempStr = mTempStr + _T("%") + mStr + _T("=");
		break;
	case FLAG_LOGNX:					//lognx
		result = log(mNum2) / log(mNum1);
		mTempStr = _T("log") + mTempStr + _T("(") + mStr + _T(")=");
		break;
	case FLAG_PINGFANG:					//平方 
		result = mNum2 * mNum2;
		mTempStr = mTempStr + _T("^2=") ;
		break;
	case FLAG_KAIFANG:					//开方  
		result = sqrt(mNum2);
		mTempStr = _T("2√") + mTempStr + _T("=");
		break;
	case FLAG_LIFANG:					//立方 
		result = mNum2 * mNum2 * mNum2;
		mTempStr = mTempStr + _T("^3=");
		break;
	case FLAG_KAILIFANG:					//开立方  
		result = pow(mNum2, 1.0 / 3);
		mTempStr = _T("3√") + mTempStr + _T("=");
		break;
	default:
		break;
	}
	//如果浮点数是个整数,就显示为整数
	if (result - int(result) <= 1e-5)
	{
		mStr.Format(L"%d", (int)result);
	}
	else
	{
		mStr.Format(L"%f", result);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);
	mNum1 = result;
	// 如果按下了等于号，则清空 mTempStr 和 mNum1
	if (mFlag == FLAG_EQ)
	{
		mTempStr.Empty();
		mNum1 = 0.0f;
	}
	mNum2 = 0.0f;
}
void CZhCalculatorDlg::OnBnClickedButtondot()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	//如果没有小数点，则加上一个小数点，如果已有小数点就忽略此次的小数点，保证最多只有1个  
	if (-1 == mStr.Find(L'.'))
	{
		mStr += L".";
	}
	UpdateData(FALSE);
}
void CZhCalculatorDlg::OnBnClickedButtonchu()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_CHU;
}
void CZhCalculatorDlg::OnBnClickedButtonback()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	if (!mStr.IsEmpty()) {
		mStr = mStr.Left(mStr.GetLength()-1);
	}
	UpdateData(FALSE);
}
void CZhCalculatorDlg::OnBnClickedButtonclear()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = L"";
	mStr1 = L"";
	mStr2 = L"";
	mStr3 = L"";
	mStr4 = L"";
	mStr5 = L"";
	mStr6 = L"";
	mStr7 = L"";
	mStr8 = L"";
	mStr9 = L"";
	mStr10 = L"";
	mNum1 = 0.0f;
	mNum2 = 0.0f;
	mFlag = FLAG_JIA;
	UpdateData(FALSE);
}
void CZhCalculatorDlg::OnBnClickedButtonclear2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = L"";
	mNum1 = 0.0f;
	mNum2 = 0.0f;
	mFlag = FLAG_JIA;
	UpdateData(FALSE);
}
int tod1(char a[], int B){
	int len, i, num;
	int sum = 0;
	len = strlen(a);                    //求得字符串长度
	for (i = 0; i < len; i++){
		if (a[i] >= '0' && a[i] <= '9')
			num = a[i] - '0';
		else if (a[i] >= 'A' && a[i] <= 'F')
			num = a[i] - 'A' + 10;
		sum = sum * B + num;
	}
	return sum;
}
void CZhCalculatorDlg::OnBnClickedButtonngenhaox()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_KAINFANG;
}
void CZhCalculatorDlg::OnBnClickedButtonnx()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_NFANG;
}
void CZhCalculatorDlg::OnBnClickedButton3genx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("3√") + mStr + _T("=");
	mNum1 = _wtof(mStr);
	double f = pow(mNum1, 1.0 / 3);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);
	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_KAILIFANG;
}
void CZhCalculatorDlg::OnBnClickedButtonx3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("^3=");
	mNum1 = _wtof(mStr);
	double f = mNum1 * mNum1 * mNum1;
	//如果浮点数其实是个整数,就显示为整数
	if (f - int(f) <= 1e-5)
	{
		mStr.Format(L"%d", (int)f);
	}
	else
	{
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);
	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_LIFANG;
}
void CZhCalculatorDlg::OnBnClickedButton2genx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("√") + mStr + _T("=");
	mNum1 = _wtof(mStr);
	double f = sqrt(mNum1);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);
	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_KAIFANG;
}
void CZhCalculatorDlg::OnBnClickedButtonx2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("^2=");
	mNum1 = _wtof(mStr);
	double f = mNum1 * mNum1;
	//如果浮点数其实是个整数,就显示为整数
	if (f - int(f) <= 1e-5)
	{
		mStr.Format(L"%d", (int)f);
	}
	else
	{
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);
	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_PINGFANG;
}
void CZhCalculatorDlg::OnBnClickedButtonjiecheng()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("!=");
	mNum1 = _wtof(mStr);
	double f = 1;
	int index = (int)mNum1;
	while (index > 0) {
		f *= index;
		index = index - 1;
	}
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);
	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_JIECHENG;
}
void CZhCalculatorDlg::OnBnClickedButtonmod()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_MOD;
}
void CZhCalculatorDlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"7";
	UpdateData(FALSE);
}
void CZhCalculatorDlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"8";
	UpdateData(FALSE);
}
void CZhCalculatorDlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"9";
	UpdateData(FALSE);
}
void CZhCalculatorDlg::OnBnClickedButtonlnx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("ln(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = log(mNum1);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);
	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_LNX;
}
void CZhCalculatorDlg::OnBnClickedButtonsinx()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("sin(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = sin(mNum1 * std_angle);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);
	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_SINX;
}
void CZhCalculatorDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"4";
	UpdateData(FALSE);
}
void CZhCalculatorDlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"5";
	UpdateData(FALSE);
}
void CZhCalculatorDlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"6";
	UpdateData(FALSE);
}
void CZhCalculatorDlg::OnBnClickedButtoncheng()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_CHENG;
}
void CZhCalculatorDlg::OnBnClickedButtonlognx()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_LOGNX;
}
void CZhCalculatorDlg::OnBnClickedButtoncosx()//cos 按键
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("cos(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = cos(mNum1 * std_angle);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);
	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_COSX;
}
void CZhCalculatorDlg::OnBnClickedButton1()//1 按键
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"1";
	UpdateData(FALSE);
}
void CZhCalculatorDlg::OnBnClickedButton2()//2 按键
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"2";
	UpdateData(FALSE);
}
void CZhCalculatorDlg::OnBnClickedButton3()//3 按键
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"3";
	UpdateData(FALSE);
}
void CZhCalculatorDlg::OnBnClickedButtonjian()//减 按键
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_JIAN;
}
void CZhCalculatorDlg::OnBnClickedButtonex()//e的x次方 按键
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("e^") + mStr + _T("=");
	mNum1 = _wtof(mStr);
	double f = pow(2.71828182845, mNum1);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);
	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_EX;
}
void CZhCalculatorDlg::OnBnClickedButtontanx()//tan 按键
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("tan(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = sin(mNum1 * std_angle) / cos(mNum1 * std_angle);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);
	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_TANX;
}
void CZhCalculatorDlg::OnBnClickedButton0()//0 按键
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"0";
	UpdateData(FALSE);
}
/*
void CZhCalculatorDlg::OnBnClickedButtondengyu()//等于 按键
{
	// TODO: 在此添加控件通知处理程序代码
	Calculator();
}
*/
void CZhCalculatorDlg::OnBnClickedButtondengyu()//等于 按键
{
	// 获取输入框文本
	CString strInput;
	m_editInput.GetWindowText(strInput);

	// 计算结果
	mStr1 = strInput;
	Calculator();

	// 显示结果
	SetDlgItemText(IDC_EDIT1, mStr);
}
void CZhCalculatorDlg::OnBnClickedButtonjia()//加 按键
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_JIA;
}

void CZhCalculatorDlg::OnBnClickedButtonzuokuo()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("(") + mStr ;
	mNum1 = _wtof(mStr);
	double f = sin(mNum1 * std_angle) / cos(mNum1 * std_angle);
	UpdateData(FALSE);
	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_ZUOKUO;
}


void CZhCalculatorDlg::OnBnClickedButtonyoukuo()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CZhCalculatorDlg::OnBnClickedButtonms()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CZhCalculatorDlg::OnBnClickedButtonmc()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CZhCalculatorDlg::OnBnClickedButtonfn()
{
	// TODO: 在此添加控件通知处理程序代码
}
