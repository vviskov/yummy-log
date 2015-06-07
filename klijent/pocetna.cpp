//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "pocetna.h"
#include "Spremiste.h"
#include "lista.h"
#include "Konfiguracija.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormPocetna *FormPocetna;
//---------------------------------------------------------------------------
__fastcall TFormPocetna::TFormPocetna(TComponent* Owner)
	: TForm(Owner)
{

	YummyLog::Konfiguracija* conf = YummyLog::Konfiguracija::getSingleton();
	Width = conf->konfiguracija.pocetna.sirina;
	Height = conf->konfiguracija.pocetna.visina;
	Left = conf->konfiguracija.pocetna.lijevo;
	Top = conf->konfiguracija.pocetna.gore;
}
//---------------------------------------------------------------------------

void __fastcall TFormPocetna::Button1Click(TObject *Sender)
{

	FormLista->Show();
	this->Hide();
}
//----------------------------------------------------------------------------


void __fastcall TFormPocetna::FormClose(TObject *Sender, TCloseAction &Action)
{
	YummyLog::Konfiguracija* conf = YummyLog::Konfiguracija::getSingleton();
	conf->konfiguracija.pocetna.sirina = Width;
	conf->konfiguracija.pocetna.visina = Height;
	conf->konfiguracija.pocetna.lijevo = Left;
	conf->konfiguracija.pocetna.gore = Top;

	conf->spremi();
}
//---------------------------------------------------------------------------


