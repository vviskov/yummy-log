//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "pregled.h"
#include "Konfiguracija.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormPregled *FormPregled;
//---------------------------------------------------------------------------
__fastcall TFormPregled::TFormPregled(TComponent* Owner)
	: TForm(Owner)
{
	YummyLog::Konfiguracija* conf = YummyLog::Konfiguracija::getSingleton();
	Width = conf->konfiguracija.pregled.sirina;
	Height = conf->konfiguracija.pregled.visina;
	Left = conf->konfiguracija.pregled.lijevo;
	Top = conf->konfiguracija.pregled.gore;
}
//---------------------------------------------------------------------------
void __fastcall TFormPregled::FormClose(TObject *Sender, TCloseAction &Action)
{
	YummyLog::Konfiguracija* conf = YummyLog::Konfiguracija::getSingleton();
	conf->konfiguracija.pregled.sirina = Width;
	conf->konfiguracija.pregled.visina = Height;
	conf->konfiguracija.pregled.lijevo = Left;
	conf->konfiguracija.pregled.gore = Top;

	conf->spremi();
}
//---------------------------------------------------------------------------

