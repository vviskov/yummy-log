//----------------------------------------------------------------------------
#ifndef sastojakH
#define sastojakH
//----------------------------------------------------------------------------
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include <StdCtrls.hpp>
#include <Controls.hpp>
#include <Forms.hpp>
#include <Graphics.hpp>
#include <Classes.hpp>
#include <SysUtils.hpp>
#include <Windows.hpp>
#include <System.hpp>

#include "dodaj.h"
#include "recepti.h"
//----------------------------------------------------------------------------
class TDialogSastojak : public TForm
{
__published:
	TButton *OKBtn;
	TButton *CancelBtn;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TEdit *Edit2;
	void __fastcall OKBtnClick(TObject *Sender);
	void __fastcall CancelBtnClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:
	_di_IXMLingredientType sastojak;
public:
	virtual __fastcall TDialogSastojak(TComponent* AOwner);
	void postaviNoviSastojak(_di_IXMLingredientType sastojak);
	void postaviSastojakZaUredjivanje(_di_IXMLingredientType sastojak);
	void ocisti();
};
//----------------------------------------------------------------------------
extern PACKAGE TDialogSastojak *DialogSastojak;
//----------------------------------------------------------------------------
#endif    
