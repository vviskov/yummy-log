//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>

#include "Konfiguracija.h"
USEFORM("uredi.cpp", FormUredi);
USEFORM("dodaj.cpp", FormDodaj);
USEFORM("lista.cpp", FormLista);
USEFORM("pregled.cpp", FormPregled);
USEFORM("pocetna.cpp", FormPocetna);
USEFORM("sastojak.cpp", DialogSastojak);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Metropolis UI Blue");
		Application->CreateForm(__classid(TFormPocetna), &FormPocetna);
		Application->CreateForm(__classid(TFormLista), &FormLista);
		Application->CreateForm(__classid(TFormPregled), &FormPregled);
		Application->CreateForm(__classid(TFormDodaj), &FormDodaj);
		Application->CreateForm(__classid(TFormUredi), &FormUredi);
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
