
// ************************************************************************************************* //
//                                                                                                 
//                                        XML Data Binding                                         
//                                                                                                 
//         Generated on: 2.6.2015. 21:29:24                                                        
//       Generated from: C:\Users\valentina\Documents\dev\oop2\yummy-log\klijent\ReceptiMock.xml   
//   Settings stored in: C:\Users\valentina\Documents\dev\oop2\yummy-log\klijent\ReceptiMock.xdb   
//                                                                                                 
// ************************************************************************************************* //

#ifndef   ReceptiMockH
#define   ReceptiMockH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>


// Forward Decls 

__interface IXMLReceptiType;
typedef System::DelphiInterface<IXMLReceptiType> _di_IXMLReceptiType;
__interface IXMLReceptType;
typedef System::DelphiInterface<IXMLReceptType> _di_IXMLReceptType;
__interface IXMLSastojciType;
typedef System::DelphiInterface<IXMLSastojciType> _di_IXMLSastojciType;
__interface IXMLSastojakType;
typedef System::DelphiInterface<IXMLSastojakType> _di_IXMLSastojakType;

// IXMLReceptiType 

__interface INTERFACE_UUID("{3AD67572-A28A-4F8C-A7C7-2E5B2E842A95}") IXMLReceptiType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual _di_IXMLReceptType __fastcall Get_Recept() = 0;
  // Methods & Properties 
  __property _di_IXMLReceptType Recept = { read=Get_Recept };
};

// IXMLReceptType 

__interface INTERFACE_UUID("{8DD2817D-A11C-4942-BC74-6B84C0862964}") IXMLReceptType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_ime() = 0;
  virtual System::UnicodeString __fastcall Get_autor() = 0;
  virtual System::UnicodeString __fastcall Get_Opis() = 0;
  virtual _di_IXMLSastojciType __fastcall Get_Sastojci() = 0;
  virtual void __fastcall Set_ime(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_autor(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_Opis(System::UnicodeString Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString ime = { read=Get_ime, write=Set_ime };
  __property System::UnicodeString autor = { read=Get_autor, write=Set_autor };
  __property System::UnicodeString Opis = { read=Get_Opis, write=Set_Opis };
  __property _di_IXMLSastojciType Sastojci = { read=Get_Sastojci };
};

// IXMLSastojciType 

__interface INTERFACE_UUID("{7207573D-CBCC-4257-B39B-BEC5A0F29415}") IXMLSastojciType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLSastojakType __fastcall Get_Sastojak(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLSastojakType __fastcall Add() = 0;
  virtual _di_IXMLSastojakType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLSastojakType Sastojak[int Index] = { read=Get_Sastojak };/* default */
};

// IXMLSastojakType 

__interface INTERFACE_UUID("{89F35CAF-CC39-4BA3-9DB3-ACC053C44B91}") IXMLSastojakType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_naziv() = 0;
  virtual System::UnicodeString __fastcall Get_kolicina() = 0;
  virtual void __fastcall Set_naziv(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_kolicina(System::UnicodeString Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString naziv = { read=Get_naziv, write=Set_naziv };
  __property System::UnicodeString kolicina = { read=Get_kolicina, write=Set_kolicina };
};

// Forward Decls 

class TXMLReceptiType;
class TXMLReceptType;
class TXMLSastojciType;
class TXMLSastojakType;

// TXMLReceptiType 

class TXMLReceptiType : public Xml::Xmldoc::TXMLNode, public IXMLReceptiType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLReceptiType 
  virtual _di_IXMLReceptType __fastcall Get_Recept();
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLReceptType 

class TXMLReceptType : public Xml::Xmldoc::TXMLNode, public IXMLReceptType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLReceptType 
  virtual System::UnicodeString __fastcall Get_ime();
  virtual System::UnicodeString __fastcall Get_autor();
  virtual System::UnicodeString __fastcall Get_Opis();
  virtual _di_IXMLSastojciType __fastcall Get_Sastojci();
  virtual void __fastcall Set_ime(System::UnicodeString Value);
  virtual void __fastcall Set_autor(System::UnicodeString Value);
  virtual void __fastcall Set_Opis(System::UnicodeString Value);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLSastojciType 

class TXMLSastojciType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLSastojciType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLSastojciType 
  virtual _di_IXMLSastojakType __fastcall Get_Sastojak(int Index);
  virtual _di_IXMLSastojakType __fastcall Add();
  virtual _di_IXMLSastojakType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLSastojakType 

class TXMLSastojakType : public Xml::Xmldoc::TXMLNode, public IXMLSastojakType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLSastojakType 
  virtual System::UnicodeString __fastcall Get_naziv();
  virtual System::UnicodeString __fastcall Get_kolicina();
  virtual void __fastcall Set_naziv(System::UnicodeString Value);
  virtual void __fastcall Set_kolicina(System::UnicodeString Value);
};

// Global Functions 

_di_IXMLReceptiType __fastcall GetRecepti(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLReceptiType __fastcall GetRecepti(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLReceptiType __fastcall LoadRecepti(const System::UnicodeString& FileName);
_di_IXMLReceptiType __fastcall  NewRecepti();

#define TargetNamespace ""

#endif