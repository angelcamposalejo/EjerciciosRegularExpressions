#pragma once  //______________________________________ EjerciciosExpresionesRegulares.h  
#include "Resource.h"
class EjerciciosExpresionesRegulares : public Win::Dialog
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
	Win::Button btReemplazar;
	Win::Textbox tbxEntrada;
	Win::Textbox tbxSalida;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(246);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(111);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjerciciosExpresionesRegulares";
		btReemplazar.Create(NULL, L"Reemplazar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 76, 44, 144, 28, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 5, 14, 234, 25, hWnd, 1001);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 3, 79, 236, 25, hWnd, 1002);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		btReemplazar.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
	}
	//_________________________________________________
	void btReemplazar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btReemplazar.IsEvent(e, BN_CLICKED)) {btReemplazar_Click(e); return true;}
		return false;
	}
};
