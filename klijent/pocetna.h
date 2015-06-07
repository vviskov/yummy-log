//---------------------------------------------------------------------------

#ifndef pocetnaH
#define pocetnaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormPocetna : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TStaticText *StaticText1;
	TStaticText *StaticText2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TFormPocetna(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormPocetna *FormPocetna;
//---------------------------------------------------------------------------
#endif
