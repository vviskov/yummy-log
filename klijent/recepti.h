
// ********************************************************************************************* //
//                                                                                             
//                                      XML Data Binding                                       
//                                                                                             
//         Generated on: 6.6.2015. 19:16:52                                                    
//       Generated from: C:\Users\valentina\Documents\dev\oop2\yummy-log\klijent\recepti.xml   
//   Settings stored in: C:\Users\valentina\Documents\dev\oop2\yummy-log\klijent\recepti.xdb   
//                                                                                             
// ********************************************************************************************* //

#ifndef   receptiH
#define   receptiH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>


// Forward Decls 

__interface IXMLrecipesType;
typedef System::DelphiInterface<IXMLrecipesType> _di_IXMLrecipesType;
__interface IXMLrecipeType;
typedef System::DelphiInterface<IXMLrecipeType> _di_IXMLrecipeType;
__interface IXMLrecipeTypeList;
typedef System::DelphiInterface<IXMLrecipeTypeList> _di_IXMLrecipeTypeList;
__interface IXMLingredientsType;
typedef System::DelphiInterface<IXMLingredientsType> _di_IXMLingredientsType;
__interface IXMLingredientType;
typedef System::DelphiInterface<IXMLingredientType> _di_IXMLingredientType;

// IXMLrecipesType 

__interface INTERFACE_UUID("{B729D2F5-ABC5-4618-B09B-07603491BE5A}") IXMLrecipesType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLrecipeType __fastcall Get_recipe(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLrecipeType __fastcall Add() = 0;
  virtual _di_IXMLrecipeType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLrecipeType recipe[int Index] = { read=Get_recipe };/* default */
};

// IXMLrecipeType 

__interface INTERFACE_UUID("{3B73DE2D-533C-485F-B055-D704D1F6B02E}") IXMLrecipeType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_id() = 0;
  virtual System::UnicodeString __fastcall Get_name() = 0;
  virtual System::UnicodeString __fastcall Get_chef() = 0;
  virtual System::UnicodeString __fastcall Get_description() = 0;
  virtual _di_IXMLingredientsType __fastcall Get_ingredients() = 0;
  virtual System::UnicodeString __fastcall Get_steps() = 0;
  virtual void __fastcall Set_id(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_name(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_chef(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_description(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_steps(System::UnicodeString Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString id = { read=Get_id, write=Set_id };
  __property System::UnicodeString name = { read=Get_name, write=Set_name };
  __property System::UnicodeString chef = { read=Get_chef, write=Set_chef };
  __property System::UnicodeString description = { read=Get_description, write=Set_description };
  __property _di_IXMLingredientsType ingredients = { read=Get_ingredients };
  __property System::UnicodeString steps = { read=Get_steps, write=Set_steps };
};

// IXMLrecipeTypeList 

__interface INTERFACE_UUID("{D8F6455C-587E-4CA2-AD3A-C7BFC2A1A025}") IXMLrecipeTypeList : public Xml::Xmlintf::IXMLNodeCollection
{
public:
  // Methods & Properties 
  virtual _di_IXMLrecipeType __fastcall Add() = 0;
  virtual _di_IXMLrecipeType __fastcall Insert(const int Index) = 0;

  virtual _di_IXMLrecipeType __fastcall Get_Item(int Index) = 0;
  __property _di_IXMLrecipeType Items[int Index] = { read=Get_Item /* default */ };
};

// IXMLingredientsType 

__interface INTERFACE_UUID("{1EA86F97-E8AA-47F5-992A-ADBD171BAC9F}") IXMLingredientsType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLingredientType __fastcall Get_ingredient(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLingredientType __fastcall Add() = 0;
  virtual _di_IXMLingredientType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLingredientType ingredient[int Index] = { read=Get_ingredient };/* default */
};

// IXMLingredientType 

__interface INTERFACE_UUID("{B14F6D03-E0FB-4950-962D-CDED2E322DBA}") IXMLingredientType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_name() = 0;
  virtual System::UnicodeString __fastcall Get_amount() = 0;
  virtual void __fastcall Set_name(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_amount(System::UnicodeString Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString name = { read=Get_name, write=Set_name };
  __property System::UnicodeString amount = { read=Get_amount, write=Set_amount };
};

// Forward Decls 

class TXMLrecipesType;
class TXMLrecipeType;
class TXMLrecipeTypeList;
class TXMLingredientsType;
class TXMLingredientType;

// TXMLrecipesType 

class TXMLrecipesType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLrecipesType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLrecipesType 
  virtual _di_IXMLrecipeType __fastcall Get_recipe(int Index);
  virtual _di_IXMLrecipeType __fastcall Add();
  virtual _di_IXMLrecipeType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLrecipeType 

class TXMLrecipeType : public Xml::Xmldoc::TXMLNode, public IXMLrecipeType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLrecipeType 
  virtual System::UnicodeString __fastcall Get_id();
  virtual System::UnicodeString __fastcall Get_name();
  virtual System::UnicodeString __fastcall Get_chef();
  virtual System::UnicodeString __fastcall Get_description();
  virtual _di_IXMLingredientsType __fastcall Get_ingredients();
  virtual System::UnicodeString __fastcall Get_steps();
  virtual void __fastcall Set_id(System::UnicodeString Value);
  virtual void __fastcall Set_name(System::UnicodeString Value);
  virtual void __fastcall Set_chef(System::UnicodeString Value);
  virtual void __fastcall Set_description(System::UnicodeString Value);
  virtual void __fastcall Set_steps(System::UnicodeString Value);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLrecipeTypeList 

class TXMLrecipeTypeList : public Xml::Xmldoc::TXMLNodeCollection, public IXMLrecipeTypeList
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLrecipeTypeList 
  virtual _di_IXMLrecipeType __fastcall Add();
  virtual _di_IXMLrecipeType __fastcall Insert(const int Index);

  virtual _di_IXMLrecipeType __fastcall Get_Item(int Index);
};

// TXMLingredientsType 

class TXMLingredientsType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLingredientsType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLingredientsType 
  virtual _di_IXMLingredientType __fastcall Get_ingredient(int Index);
  virtual _di_IXMLingredientType __fastcall Add();
  virtual _di_IXMLingredientType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLingredientType 

class TXMLingredientType : public Xml::Xmldoc::TXMLNode, public IXMLingredientType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLingredientType 
  virtual System::UnicodeString __fastcall Get_name();
  virtual System::UnicodeString __fastcall Get_amount();
  virtual void __fastcall Set_name(System::UnicodeString Value);
  virtual void __fastcall Set_amount(System::UnicodeString Value);
};

// Global Functions 

_di_IXMLrecipesType __fastcall Getrecipes(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLrecipesType __fastcall Getrecipes(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLrecipesType __fastcall Loadrecipes(const System::UnicodeString& FileName);
_di_IXMLrecipesType __fastcall  Newrecipes();

#define TargetNamespace ""

#endif