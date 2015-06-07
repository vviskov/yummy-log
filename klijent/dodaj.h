//---------------------------------------------------------------------------

#ifndef dodajH
#define dodajH

#include "recepti.h"
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TFormDodaj : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit2;
	TLabel *Label3;
	TListView *ListView1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TLabel *Label4;
	TLabel *Label5;
	TMemo *Memo1;
	TMemo *Memo2;
	TButton *Button4;
	TButton *Button5;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ListView1SelectItem(TObject *Sender, TListItem *Item, bool Selected);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);

private:	// User declarations
	_di_IXMLingredientType selektiranSastojak;
	_di_IXMLrecipesType _recepti;
	_di_IXMLrecipeType noviRecept;
	void dodajSastojak(UnicodeString ime, UnicodeString kolicina);
	void osvjeziSastojke();
public:		// User declarations
	void postaviReceptZaUredjivanje(_di_IXMLrecipeType recept);
	void ocisti();
	__fastcall TFormDodaj(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormDodaj *FormDodaj;
//---------------------------------------------------------------------------
#endif
