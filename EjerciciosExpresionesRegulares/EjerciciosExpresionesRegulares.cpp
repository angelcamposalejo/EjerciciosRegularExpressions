#include "stdafx.h"  //________________________________________ EjerciciosExpresionesRegulares.cpp
#include "EjerciciosExpresionesRegulares.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjerciciosExpresionesRegulares app;
	return app.BeginDialog(IDI_EjerciciosExpresionesRegulares, hInstance);
}

void EjerciciosExpresionesRegulares::Window_Open(Win::Event& e)
{
}

void EjerciciosExpresionesRegulares::btMatch_Click(Win::Event& e)
{
	tr1::wregex reg(L"[0,1,2,3,4,5,6,7,8,9]");
	if (tr1::regex_match(tbxEntrada.Text, reg) == true)
	{
		tbxEntrada.ShowBalloonTip(L"Text Regex", L"Entrada correcta", TTI_INFO);
	}
	else
	{
		tbxEntrada.ShowBalloonTip(L"Text Regex", L"Entrada incorrecta", TTI_ERROR);
	}
}

