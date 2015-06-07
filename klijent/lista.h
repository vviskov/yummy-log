//---------------------------------------------------------------------------

#ifndef listaH
#define listaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include "recepti.h"
#include <Vcl.ComCtrls.hpp>
#include <Xml.adomxmldom.hpp>
//---------------------------------------------------------------------------
class TFormLista : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TXMLDocument *XMLDocument1;
	TListView *ListView1;
	TButton *Button3;
	TButton *Button4;

	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall ListView1SelectItem(TObject *Sender, TListItem *Item, bool Selected);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TFormLista(TComponent* Owner);
	_di_IXMLrecipesType recepti;
	void osvjeziListu();
};
//---------------------------------------------------------------------------
extern PACKAGE TFormLista *FormLista;
//---------------------------------------------------------------------------
#endif
