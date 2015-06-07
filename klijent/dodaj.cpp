//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "dodaj.h"
#include "Konfiguracija.h"
#include "Spremiste.h"
#include "lista.h"
#include "sastojak.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormDodaj *FormDodaj;
//---------------------------------------------------------------------------
__fastcall TFormDodaj::TFormDodaj(TComponent* Owner)
	: TForm(Owner)
{
	YummyLog::Konfiguracija* conf = YummyLog::Konfiguracija::getSingleton();
	Width = conf->konfiguracija.dodaj.sirina;
	Height = conf->konfiguracija.dodaj.visina;
	Left = conf->konfiguracija.dodaj.lijevo;
	Top = conf->konfiguracija.dodaj.gore;

	_recepti = Newrecipes();
	noviRecept = _recepti->Add();
}
//---------------------------------------------------------------------------
void __fastcall TFormDodaj::FormClose(TObject *Sender, TCloseAction &Action)
{
	YummyLog::Konfiguracija* conf = YummyLog::Konfiguracija::getSingleton();
	conf->konfiguracija.dodaj.sirina = Width;
	conf->konfiguracija.dodaj.visina = Height;
	conf->konfiguracija.dodaj.lijevo = Left;
	conf->konfiguracija.dodaj.gore = Top;

	conf->spremi();

    ocisti();
	FormLista->osvjeziListu();
	FormLista->Button1->Enabled = false;
	FormLista->Button3->Enabled = false;
	FormLista->Button4->Enabled = false;
}
//---------------------------------------------------------------------------

void TFormDodaj::ocisti() {
	noviRecept->Set_name("");
	noviRecept->Set_chef("");
	noviRecept->Set_description("");
	noviRecept->Set_steps("");
	noviRecept->Set_id("");
	noviRecept->ingredients->Clear();
	Edit1->Text="";
	Edit2->Text="";
	Memo1->Text="";
	Memo2->Text="";
	ListView1->Clear();
}

void TFormDodaj::dodajSastojak(UnicodeString ime, UnicodeString kolicina) {
	_di_IXMLingredientType noviSastojak = noviRecept->ingredients->Add();
	noviSastojak->Set_name(ime);
	noviSastojak->Set_amount(kolicina);
	osvjeziSastojke();
}

void TFormDodaj::osvjeziSastojke() {
	ListView1->Clear();
	for(int i = 0; i < noviRecept->ingredients->Count; i++) {
		TListItem* sastojak = ListView1->Items->Add();
		sastojak->Caption = noviRecept->ingredients->Get_ingredient(i)->Get_name();
		sastojak->SubItems->Add(noviRecept->ingredients->Get_ingredient(i)->Get_amount());
	}
}

void __fastcall TFormDodaj::Button4Click(TObject *Sender)
{
	noviRecept->Set_name(Edit1->Text);
	noviRecept->Set_chef(Edit2->Text);
	noviRecept->Set_description(Memo1->Text);
	noviRecept->Set_steps(Memo2->Text);

	YummyLog::Spremiste::getSingleton()->spremiRecept(noviRecept);
	ocisti();
	Close();
	FormLista->osvjeziListu();
	FormLista->Button1->Enabled = false;
	FormLista->Button3->Enabled = false;
	FormLista->Button4->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TFormDodaj::Button1Click(TObject *Sender)
{
	_di_IXMLingredientType sastojak = this->noviRecept->ingredients->Add();
	DialogSastojak->postaviNoviSastojak(sastojak);
	if(1 ==	DialogSastojak->ShowModal()) {
		osvjeziSastojke();
	} else {
		this->noviRecept->ingredients->Delete(this->noviRecept->ingredients->Count - 1);
	}
	DialogSastojak->ocisti();
}
//---------------------------------------------------------------------------


void __fastcall TFormDodaj::ListView1SelectItem(TObject *Sender, TListItem *Item,
		  bool Selected)
{
	if(Selected) {
		this->selektiranSastojak = noviRecept->ingredients->Get_ingredient(Item->Index);
		Button2->Enabled = true;
		Button3->Enabled = true;
	} else {
		Button2->Enabled = false;
		Button3->Enabled = false;
	}
}
//---------------------------------------------------------------------------


void __fastcall TFormDodaj::Button2Click(TObject *Sender)
{
	_di_IXMLingredientType sastojak = this->noviRecept->ingredients->Add();
	sastojak->Set_name(this->selektiranSastojak->Get_name());
	sastojak->Set_amount(this->selektiranSastojak->Get_amount());
	DialogSastojak->postaviSastojakZaUredjivanje(sastojak);
	if(1 ==	DialogSastojak->ShowModal()) {
		this->selektiranSastojak->Set_name(sastojak->Get_name());
		this->selektiranSastojak->Set_amount(sastojak->Get_amount());
		this->noviRecept->ingredients->Delete(this->noviRecept->ingredients->Count - 1);
		osvjeziSastojke();
	} else {
		this->noviRecept->ingredients->Delete(this->noviRecept->ingredients->Count - 1);
	}
	DialogSastojak->ocisti();
}
//---------------------------------------------------------------------------

void __fastcall TFormDodaj::Button3Click(TObject *Sender)
{
	if(this->selektiranSastojak != NULL) {
		this->noviRecept->ingredients->Remove(this->selektiranSastojak);
		this->selektiranSastojak = NULL;
		this->osvjeziSastojke();
	}

	this->Button2->Enabled = false;
	this->Button3->Enabled = false;
}
//---------------------------------------------------------------------------

void TFormDodaj::postaviReceptZaUredjivanje(_di_IXMLrecipeType recept) {
	this->ocisti();
	this->noviRecept->Set_id(recept->Get_id());
	this->noviRecept->Set_name(recept->Get_name());
	this->noviRecept->Set_chef(recept->Get_chef());
	this->noviRecept->Set_description(recept->Get_description());
	this->noviRecept->Set_steps(recept->Get_steps());
	for(int i = 0; i < recept->ingredients->Count; i++) {
		_di_IXMLingredientType sastojak = this->noviRecept->ingredients->Add();
		sastojak->Set_name(recept->ingredients->Get_ingredient(i)->Get_name());
		sastojak->Set_amount(recept->ingredients->Get_ingredient(i)->Get_amount());
	}
	Edit1->Text = this->noviRecept->Get_name();
	Edit2->Text = this->noviRecept->Get_chef();
	this->osvjeziSastojke();
	Memo1->Text = this->noviRecept->Get_description();
	Memo2->Text = this->noviRecept->Get_steps();
}
void __fastcall TFormDodaj::Button5Click(TObject *Sender)
{
	ocisti();
	Close();
	FormLista->Button1->Enabled = false;
	FormLista->Button3->Enabled = false;
	FormLista->Button4->Enabled = false;
}
//---------------------------------------------------------------------------

