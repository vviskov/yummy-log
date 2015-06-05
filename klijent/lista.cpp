//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "lista.h"
#include "pocetna.h"
#include "pregled.h"
#include "dodaj.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormLista *FormLista;
//---------------------------------------------------------------------------
__fastcall TFormLista::TFormLista(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormLista::FormCreate(TObject *Sender)
{
	Width = 500;
	Height = 500;
	Caption = "Lista Recepata";
}
//---------------------------------------------------------------------------


void __fastcall TFormLista::FormClose(TObject *Sender, TCloseAction &Action)
{
	FormPocetna->Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormLista::Button1Click(TObject *Sender)
{
	FormPregled->Visible = !FormPregled->Visible;

}
//---------------------------------------------------------------------------

void __fastcall TFormLista::Button2Click(TObject *Sender)
{
	FormDodaj->Visible = !FormDodaj->Visible;
}
//---------------------------------------------------------------------------

