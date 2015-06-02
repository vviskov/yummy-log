//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("pregled.cpp", FormPregled);
USEFORM("dodaj.cpp", FormDodaj);
USEFORM("lista.cpp", FormLista);
USEFORM("pocetna.cpp", FormPocetna);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Lavender Classico");
		Application->CreateForm(__classid(TFormPocetna), &FormPocetna);
		Application->CreateForm(__classid(TFormLista), &FormLista);
		Application->CreateForm(__classid(TFormPregled), &FormPregled);
		Application->CreateForm(__classid(TFormDodaj), &FormDodaj);
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
