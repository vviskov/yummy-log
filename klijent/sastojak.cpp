//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "sastojak.h"
#include "dodaj.h"
//---------------------------------------------------------------------
#pragma resource "*.dfm"
TDialogSastojak *DialogSastojak;
//---------------------------------------------------------------------
__fastcall TDialogSastojak::TDialogSastojak(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------

void TDialogSastojak::postaviNoviSastojak(_di_IXMLingredientType sastojak) {
	this->sastojak = sastojak;
	Edit1->Text = "";
	Edit2->Text = "";
}

void TDialogSastojak::postaviSastojakZaUredjivanje(_di_IXMLingredientType sastojak) {
	this->sastojak = sastojak;
	Edit1->Text = sastojak->Get_name();
	Edit2->Text = sastojak->Get_amount();
}

void TDialogSastojak::ocisti() {
	Edit1->Text = "";
	Edit2->Text = "";
	this->sastojak = NULL;
}

void __fastcall TDialogSastojak::OKBtnClick(TObject *Sender)
{
	this->sastojak->Set_name(Edit1->Text);
	this->sastojak->Set_amount(Edit2->Text);
	FormDodaj->Button2->Enabled = false;
	FormDodaj->Button3->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TDialogSastojak::CancelBtnClick(TObject *Sender)
{
	FormDodaj->Button2->Enabled = false;
	FormDodaj->Button3->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TDialogSastojak::FormClose(TObject *Sender, TCloseAction &Action)

{
	FormDodaj->Button2->Enabled = false;
	FormDodaj->Button3->Enabled = false;
}
//---------------------------------------------------------------------------

