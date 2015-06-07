//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "lista.h"
#include "pocetna.h"
#include "pregled.h"
#include "dodaj.h"
#include "Konfiguracija.h"
#include "Spremiste.h"
#include "uredi.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormLista *FormLista;


void TFormLista::osvjeziListu() {
	recepti = YummyLog::Spremiste::getSingleton()->dohvatiRecepte();

	ListView1->Items->Clear();
	for (int i=0; i < recepti->Count; i++) {
	   ListView1->Items->Add();
	   ListView1->Items->Item[i]->Caption = recepti->Get_recipe(i)->Get_name();
	   ListView1->Items->Item[i]->SubItems->Add(recepti->Get_recipe(i)->Get_chef());
	   ListView1->Items->Item[i]->SubItems->Add(recepti->Get_recipe(i)->Get_description());
	}
}
//---------------------------------------------------------------------------
__fastcall TFormLista::TFormLista(TComponent* Owner)
	: TForm(Owner)
{
	YummyLog::Konfiguracija* conf = YummyLog::Konfiguracija::getSingleton();
	Width = conf->konfiguracija.lista.sirina;
	Height = conf->konfiguracija.lista.visina;
	Left = conf->konfiguracija.lista.lijevo;
	Top = conf->konfiguracija.lista.gore;
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

	YummyLog::Konfiguracija* conf = YummyLog::Konfiguracija::getSingleton();
	conf->konfiguracija.lista.sirina = Width;
	conf->konfiguracija.lista.visina = Height;
	conf->konfiguracija.lista.lijevo = Left;
	conf->konfiguracija.lista.gore = Top;

	conf->spremi();
}
//---------------------------------------------------------------------------

void __fastcall TFormLista::Button1Click(TObject *Sender)
{
	FormPregled->Visible = !FormPregled->Visible;

}
//---------------------------------------------------------------------------

void __fastcall TFormLista::Button2Click(TObject *Sender)
{
	FormDodaj->ocisti();
	FormDodaj->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormLista::FormShow(TObject *Sender)
{
	this->osvjeziListu();
}
//---------------------------------------------------------------------------

void __fastcall TFormLista::ListView1SelectItem(TObject *Sender, TListItem *Item,
		  bool Selected)
{
	if(Selected) {
		YummyLog::Spremiste::getSingleton()->postaviOdabranRecept(recepti->Get_recipe(Item->Index));
		Button1->Enabled = true;
		Button3->Enabled = true;
		Button4->Enabled = true;
	} else {
		Button1->Enabled = false;
		Button3->Enabled = false;
		Button4->Enabled = false;
	}
}
//---------------------------------------------------------------------------


void __fastcall TFormLista::Button3Click(TObject *Sender)
{
	FormDodaj->ocisti();
	FormDodaj->postaviReceptZaUredjivanje(YummyLog::Spremiste::getSingleton()->dohvatiSelektiranRecept());
	FormDodaj->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormLista::Button4Click(TObject *Sender)
{
	if (1 == MessageBox(NULL, L"Jeste li sigurni da želite obrisati oznaèeni recept?", L"", MB_OKCANCEL)) {

		YummyLog::Spremiste::getSingleton()->obrisiSelektiranRecept();
		this->osvjeziListu();
		Button1->Enabled = false;
		Button3->Enabled = false;
		Button4->Enabled = false;

	}
}
//---------------------------------------------------------------------------

