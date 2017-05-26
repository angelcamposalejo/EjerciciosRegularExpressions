#pragma once  //______________________________________ EjerciciosExpresionesRegulares.h  
#include "Resource.h"
class EjerciciosExpresionesRegulares: public Win::Dialog
{
public:
	EjerciciosExpresionesRegulares()
	{
	}
	~EjerciciosExpresionesRegulares()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEntrada;
	Win::Button bt1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(321);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(50);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjerciciosExpresionesRegulares";
		lb1.Create(NULL, L"Entrada", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 11, 17, 103, 25, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 112, 17, 114, 25, hWnd, 1001);
		bt1.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 231, 17, 83, 26, hWnd, 1002);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		bt1.Font = fontArial014A;
	}
	//_________________________________________________
	void bt1_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (bt1.IsEvent(e, BN_CLICKED)) {bt1_Click(e); return true;}
		return false;
	}
};
