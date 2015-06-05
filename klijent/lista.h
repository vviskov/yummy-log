//---------------------------------------------------------------------------

#ifndef listaH
#define listaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormLista : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormLista(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormLista *FormLista;
//---------------------------------------------------------------------------
#endif
