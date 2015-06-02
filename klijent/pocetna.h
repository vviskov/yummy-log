//---------------------------------------------------------------------------

#ifndef pocetnaH
#define pocetnaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
//---------------------------------------------------------------------------
class TFormPocetna : public TForm
{
__published:	// IDE-managed Components
	TXMLDocument *XMLDocument1;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormPocetna(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormPocetna *FormPocetna;
//---------------------------------------------------------------------------
#endif
