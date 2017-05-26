#include "stdafx.h"  //________________________________________ EjerciciosExpresionesRegulares.cpp
#include "EjerciciosExpresionesRegulares.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjerciciosExpresionesRegulares app;
	return app.BeginDialog(IDI_EjerciciosExpresionesRegulares, hInstance);
}

void EjerciciosExpresionesRegulares::Window_Open(Win::Event& e)
{
	this->tbxEntrada.Text = L"hello world is the hello world program";

}


void EjerciciosExpresionesRegulares::btReemplazar_Click(Win::Event& e)
{
	tr1::wregex reg(L"hello");
	wstring reemplazar(L"hola");
	tbxSalida.Text = tr1::regex_replace(tbxEntrada.Text, reg,reemplazar);
}

