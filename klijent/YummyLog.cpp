//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>

#include "Konfiguracija.h"
USEFORM("sastojak.cpp", DialogSastojak);
USEFORM("lista.cpp", FormLista);
USEFORM("dodaj.cpp", FormDodaj);
USEFORM("pregled.cpp", FormPregled);
USEFORM("pocetna.cpp", FormPocetna);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->HelpFile = "C:\\Users\\valentina\\Documents\\dev\\oop2\\yummy-log\\klijent\\YummyHelp.chm";
		TStyleManager::TrySetStyle("Metropolis UI Blue");
		Application->CreateForm(__classid(TFormPocetna), &FormPocetna);
		Application->CreateForm(__classid(TFormLista), &FormLista);
		Application->CreateForm(__classid(TFormPregled), &FormPregled);
		Application->CreateForm(__classid(TFormDodaj), &FormDodaj);
		Application->CreateForm(__classid(TDialogSastojak), &DialogSastojak);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
