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
private:	// User declarations
public:		// User declarations
	__fastcall TFormLista(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormLista *FormLista;
//---------------------------------------------------------------------------
#endif
