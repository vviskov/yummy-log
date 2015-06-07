
// ********************************************************************************************* //
//                                                                                             
//                                      XML Data Binding                                       
//                                                                                             
//         Generated on: 6.6.2015. 19:16:52                                                    
//       Generated from: C:\Users\valentina\Documents\dev\oop2\yummy-log\klijent\recepti.xml   
//   Settings stored in: C:\Users\valentina\Documents\dev\oop2\yummy-log\klijent\recepti.xdb   
//                                                                                             
// ********************************************************************************************* //

#include <System.hpp>
#pragma hdrstop

#include "recepti.h"


// Global Functions 

_di_IXMLrecipesType __fastcall Getrecipes(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLrecipesType) Doc->GetDocBinding("recipes", __classid(TXMLrecipesType), TargetNamespace);
};

_di_IXMLrecipesType __fastcall Getrecipes(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getrecipes(DocIntf);
};

_di_IXMLrecipesType __fastcall Loadrecipes(const System::UnicodeString& FileName)
{
  return (_di_IXMLrecipesType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("recipes", __classid(TXMLrecipesType), TargetNamespace);
};

_di_IXMLrecipesType __fastcall  Newrecipes()
{
  return (_di_IXMLrecipesType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("recipes", __classid(TXMLrecipesType), TargetNamespace);
};

// TXMLrecipesType 

void __fastcall TXMLrecipesType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("recipe"), __classid(TXMLrecipeType));
  ItemTag = "recipe";
  ItemInterface = __uuidof(IXMLrecipeType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLrecipeType __fastcall TXMLrecipesType::Get_recipe(int Index)
{
  return (_di_IXMLrecipeType) List->Nodes[Index];
};

_di_IXMLrecipeType __fastcall TXMLrecipesType::Add()
{
  return (_di_IXMLrecipeType) AddItem(-1);
};

_di_IXMLrecipeType __fastcall TXMLrecipesType::Insert(const int Index)
{
  return (_di_IXMLrecipeType) AddItem(Index);
};

// TXMLrecipeType 

void __fastcall TXMLrecipeType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("ingredients"), __classid(TXMLingredientsType));
  Xml::Xmldoc::TXMLNode::AfterConstruction();
};

System::UnicodeString __fastcall TXMLrecipeType::Get_id()
{
  return GetChildNodes()->Nodes[System::UnicodeString("id")]->NodeValue.operator System::UnicodeString();
};

void __fastcall TXMLrecipeType::Set_id(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("id")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLrecipeType::Get_name()
{
  return GetChildNodes()->Nodes[System::UnicodeString("name")]->NodeValue.operator System::UnicodeString();
};

void __fastcall TXMLrecipeType::Set_name(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("name")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLrecipeType::Get_chef()
{
  return GetChildNodes()->Nodes[System::UnicodeString("chef")]->NodeValue.operator System::UnicodeString();
};

void __fastcall TXMLrecipeType::Set_chef(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("chef")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLrecipeType::Get_description()
{
  return GetChildNodes()->Nodes[System::UnicodeString("description")]->NodeValue.operator System::UnicodeString();
};

void __fastcall TXMLrecipeType::Set_description(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("description")]->NodeValue = Value;
};

_di_IXMLingredientsType __fastcall TXMLrecipeType::Get_ingredients()
{
  return (_di_IXMLingredientsType) GetChildNodes()->Nodes[System::UnicodeString("ingredients")];
};

System::UnicodeString __fastcall TXMLrecipeType::Get_steps()
{
  return GetChildNodes()->Nodes[System::UnicodeString("steps")]->NodeValue.operator System::UnicodeString();
};

void __fastcall TXMLrecipeType::Set_steps(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("steps")]->NodeValue = Value;
};

// TXMLrecipeTypeList 

_di_IXMLrecipeType __fastcall TXMLrecipeTypeList::Add()
{
  return (_di_IXMLrecipeType) AddItem(-1);
};

_di_IXMLrecipeType __fastcall TXMLrecipeTypeList::Insert(const int Index)
{
  return (_di_IXMLrecipeType) AddItem(Index);
};

_di_IXMLrecipeType __fastcall TXMLrecipeTypeList::Get_Item(int Index)
{
  return (_di_IXMLrecipeType) List->Nodes[Index];
};

// TXMLingredientsType 

void __fastcall TXMLingredientsType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("ingredient"), __classid(TXMLingredientType));
  ItemTag = "ingredient";
  ItemInterface = __uuidof(IXMLingredientType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLingredientType __fastcall TXMLingredientsType::Get_ingredient(int Index)
{
  return (_di_IXMLingredientType) List->Nodes[Index];
};

_di_IXMLingredientType __fastcall TXMLingredientsType::Add()
{
  return (_di_IXMLingredientType) AddItem(-1);
};

_di_IXMLingredientType __fastcall TXMLingredientsType::Insert(const int Index)
{
  return (_di_IXMLingredientType) AddItem(Index);
};

// TXMLingredientType 

System::UnicodeString __fastcall TXMLingredientType::Get_name()
{
  return GetChildNodes()->Nodes[System::UnicodeString("name")]->NodeValue.operator System::UnicodeString();
};

void __fastcall TXMLingredientType::Set_name(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("name")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLingredientType::Get_amount()
{
  return GetChildNodes()->Nodes[System::UnicodeString("amount")]->NodeValue.operator System::UnicodeString();
};

void __fastcall TXMLingredientType::Set_amount(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("amount")]->NodeValue = Value;
};
