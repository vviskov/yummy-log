//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uredi.h"
#include "Konfiguracija.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormUredi *FormUredi;
//---------------------------------------------------------------------------
__fastcall TFormUredi::TFormUredi(TComponent* Owner)
	: TForm(Owner)
{
	YummyLog::Konfiguracija* conf = YummyLog::Konfiguracija::getSingleton();
	Width = conf->konfiguracija.uredi.sirina;
	Height = conf->konfiguracija.uredi.visina;
	Left = conf->konfiguracija.uredi.lijevo;
	Top = conf->konfiguracija.uredi.gore;
}
//---------------------------------------------------------------------------
void __fastcall TFormUredi::FormClick(TObject *Sender)
{
	YummyLog::Konfiguracija* conf = YummyLog::Konfiguracija::getSingleton();
	conf->konfiguracija.uredi.sirina = Width;
	conf->konfiguracija.uredi.visina = Height;
	conf->konfiguracija.uredi.lijevo = Left;
	conf->konfiguracija.uredi.gore = Top;

	conf->spremi();
}
//---------------------------------------------------------------------------
