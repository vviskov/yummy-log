//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "pregled.h"
#include "Konfiguracija.h"
#include "Spremiste.h"
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


//---------------------------------------------------------------------------

void __fastcall TFormPregled::FormShow(TObject *Sender)
{
	_di_IXMLrecipeType recept = YummyLog::Spremiste::getSingleton()->dohvatiSelektiranRecept();

	TStringStream* sastojci = new TStringStream("", TEncoding::UTF8, true);

	sastojci->WriteString("\r\n" + recept->Get_name() + "\r\n\r\n");
	sastojci->WriteString("" + recept->Get_chef() + "\r\n\r\n");
	sastojci->WriteString("Opis: " + recept->Get_description() + "\r\n\r\n");

	sastojci->WriteString("Sastojci: \r\n");
	for (int i = 0; i < recept->ingredients->Count; i++) {
		sastojci->WriteString(recept->ingredients->Get_ingredient(i)->Get_name());
		sastojci->WriteString(" : ");
		sastojci->WriteString(recept->ingredients->Get_ingredient(i)->Get_amount());
		sastojci->WriteString("\r\n");
	}
	sastojci->WriteString("\r\n");

	sastojci->WriteString("Koraci: \r\n" + recept->Get_steps() + "\r\n");

	Pregled->Text = sastojci->DataString;

	delete sastojci;
}
//---------------------------------------------------------------------------


