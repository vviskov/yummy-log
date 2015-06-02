//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "pocetna.h"
#include "Spremiste.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormPocetna *FormPocetna;
//---------------------------------------------------------------------------
__fastcall TFormPocetna::TFormPocetna(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TFormPocetna::Button1Click(TObject *Sender)
{
	YummyLog::Spremiste* s = YummyLog::Spremiste::getSingleton();

	_di_IXMLReceptiType recepti = GetRecepti(XMLDocument1);

	s->setRecepti(recepti);

	ShowMessage(s->getRecepti()->GetNodeName());
}
//---------------------------------------------------------------------------

