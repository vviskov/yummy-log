//---------------------------------------------------------------------------

#ifndef pregledH
#define pregledH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormPregled : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TFormPregled(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormPregled *FormPregled;
//---------------------------------------------------------------------------
#endif
