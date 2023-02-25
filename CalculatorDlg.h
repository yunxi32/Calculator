
// CalculatorDlg.h: 头文件
//
#pragma once

//运算符
enum Calculator_Flag {
	FLAG_JIA,
	FLAG_JIAN,
	FLAG_CHENG,
	FLAG_CHU,
	FLAG_PINGFANG,
	FLAG_KAIFANG,
	FLAG_LIFANG,
	FLAG_KAILIFANG,
	FLAG_NFANG,
	FLAG_KAINFANG,
	FLAG_HTD,
	FLAG_OTD,
	FLAG_BTD,
	FLAG_H,
	FLAG_O,
	FLAG_B,
	FLAG_JIECHENG,
	FLAG_MOD,
	FLAG_LNX,
	FLAG_LOGNX,
	FLAG_EX,
	FLAG_SINX,
	FLAG_COSX,
	FLAG_TANX,
	FLAG_EQ,
	FLAG_ZUOKUO,
};


// CZhCalculatorDlg 对话框
class CZhCalculatorDlg : public CDialogEx
{
// 构造
public:
	CZhCalculatorDlg(CWnd* pParent = nullptr);	// 标准构造函数
	void SaveFirstValue();		//保存第一个输入值
	void Calculator();			//计算

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ZHCALCULATOR_DIALOG };
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



private:
	
	CString mStr;				//编辑框1内的字符串
	CString mStr1;				//编辑框2内的字符串
	CString mStr2;	
	CString mStr3;
	CString mStr4;
	CString mStr5;
	CString mStr6;
	CString mStr7;
	CString mStr8;
	CString mStr9;
	CString mStr10;
	CString mTempStr;
	double mNum1;				//输入的2个值
	double mNum2;
	Calculator_Flag mFlag;		//运算符号
	CEdit m_editInput;
public:
	afx_msg void OnBnClickedButtonback();
	afx_msg void OnBnClickedButtonclear();
	afx_msg void OnBnClickedButtonhd();
	afx_msg void OnBnClickedButtonod();
	afx_msg void OnBnClickedButtonbd();
	afx_msg void OnBnClickedButtonh();
	afx_msg void OnBnClickedButtono();
	afx_msg void OnBnClickedButtonb();
	afx_msg void OnBnClickedButtonngenhaox();
	afx_msg void OnBnClickedButtonnx();
	afx_msg void OnBnClickedButton3genx();
	afx_msg void OnBnClickedButtonx3();
	afx_msg void OnBnClickedButton2genx();
	afx_msg void OnBnClickedButtonx2();
	afx_msg void OnBnClickedButtonjiecheng();
	afx_msg void OnBnClickedButtonmod();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButtonjia();
	afx_msg void OnBnClickedButtonlnx();
	afx_msg void OnBnClickedButtonsinx();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButtonjian();
	afx_msg void OnBnClickedButtoncheng();
	afx_msg void OnBnClickedButtonlognx();
	afx_msg void OnBnClickedButtoncosx();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButtonex();
	afx_msg void OnBnClickedButtontanx();
	afx_msg void OnBnClickedButton0();
	afx_msg void OnBnClickedButtondot();
	afx_msg void OnBnClickedButtondengyu();
	afx_msg void OnBnClickedButtonchu();
	
	afx_msg void OnBnClickedButtonA();
	afx_msg void OnBnClickedButtonod2();
	afx_msg void OnBnClickedButtonbd2();
	afx_msg void OnBnClickedButtonh2();
	afx_msg void OnBnClickedButtono2();
	afx_msg void OnBnClickedButtonb2();
	afx_msg void OnBnClickedButtonclear2();
	afx_msg void OnBnClickedButtonzuokuo();
	afx_msg void OnBnClickedButtonyoukuo();
	afx_msg void OnBnClickedButtonms();
	afx_msg void OnBnClickedButtonmc();
	afx_msg void OnBnClickedButtonfn();
};
