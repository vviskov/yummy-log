//---------------------------------------------------------------------------

#ifndef urediH
#define urediH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormUredi : public TForm
{
__published:	// IDE-managed Components
	void __fastcall FormClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormUredi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormUredi *FormUredi;
//---------------------------------------------------------------------------
#endif
