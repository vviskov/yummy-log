//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "pocetna.h"
#include "Spremiste.h"
#include "lista.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormPocetna *FormPocetna;
//---------------------------------------------------------------------------
__fastcall TFormPocetna::TFormPocetna(TComponent* Owner)
	: TForm(Owner)
{
	Width = 500;
	Height = 500;
}
//---------------------------------------------------------------------------


void __fastcall TFormPocetna::Button1Click(TObject *Sender)
{
	 FormLista->Show();
	 this->Hide();
}
//----------------------------------------------------------------------------





