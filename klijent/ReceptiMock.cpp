
// ************************************************************************************************* //
//                                                                                                 
//                                        XML Data Binding                                         
//                                                                                                 
//         Generated on: 2.6.2015. 21:29:24                                                        
//       Generated from: C:\Users\valentina\Documents\dev\oop2\yummy-log\klijent\ReceptiMock.xml   
//   Settings stored in: C:\Users\valentina\Documents\dev\oop2\yummy-log\klijent\ReceptiMock.xdb   
//                                                                                                 
// ************************************************************************************************* //

#include <System.hpp>
#pragma hdrstop

#include "ReceptiMock.h"


// Global Functions 

_di_IXMLReceptiType __fastcall GetRecepti(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLReceptiType) Doc->GetDocBinding("Recepti", __classid(TXMLReceptiType), TargetNamespace);
};

_di_IXMLReceptiType __fastcall GetRecepti(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return GetRecepti(DocIntf);
};

_di_IXMLReceptiType __fastcall LoadRecepti(const System::UnicodeString& FileName)
{
  return (_di_IXMLReceptiType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("Recepti", __classid(TXMLReceptiType), TargetNamespace);
};

_di_IXMLReceptiType __fastcall  NewRecepti()
{
  return (_di_IXMLReceptiType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("Recepti", __classid(TXMLReceptiType), TargetNamespace);
};

// TXMLReceptiType 

void __fastcall TXMLReceptiType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("Recept"), __classid(TXMLReceptType));
  Xml::Xmldoc::TXMLNode::AfterConstruction();
};

_di_IXMLReceptType __fastcall TXMLReceptiType::Get_Recept()
{
  return (_di_IXMLReceptType) GetChildNodes()->Nodes[System::UnicodeString("Recept")];
};

// TXMLReceptType 

void __fastcall TXMLReceptType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("Sastojci"), __classid(TXMLSastojciType));
  Xml::Xmldoc::TXMLNode::AfterConstruction();
};

System::UnicodeString __fastcall TXMLReceptType::Get_ime()
{
  return GetAttributeNodes()->Nodes[System::UnicodeString("ime")]->NodeValue.operator System::UnicodeString();
};

void __fastcall TXMLReceptType::Set_ime(System::UnicodeString Value)
{
  SetAttribute(System::UnicodeString("ime"), Value);
};

System::UnicodeString __fastcall TXMLReceptType::Get_autor()
{
  return GetAttributeNodes()->Nodes[System::UnicodeString("autor")]->NodeValue.operator System::UnicodeString();
};

void __fastcall TXMLReceptType::Set_autor(System::UnicodeString Value)
{
  SetAttribute(System::UnicodeString("autor"), Value);
};

System::UnicodeString __fastcall TXMLReceptType::Get_Opis()
{
  return GetChildNodes()->Nodes[System::UnicodeString("Opis")]->NodeValue.operator System::UnicodeString();
};

void __fastcall TXMLReceptType::Set_Opis(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("Opis")]->NodeValue = Value;
};

_di_IXMLSastojciType __fastcall TXMLReceptType::Get_Sastojci()
{
  return (_di_IXMLSastojciType) GetChildNodes()->Nodes[System::UnicodeString("Sastojci")];
};

// TXMLSastojciType 

void __fastcall TXMLSastojciType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("Sastojak"), __classid(TXMLSastojakType));
  ItemTag = "Sastojak";
  ItemInterface = __uuidof(IXMLSastojakType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLSastojakType __fastcall TXMLSastojciType::Get_Sastojak(int Index)
{
  return (_di_IXMLSastojakType) List->Nodes[Index];
};

_di_IXMLSastojakType __fastcall TXMLSastojciType::Add()
{
  return (_di_IXMLSastojakType) AddItem(-1);
};

_di_IXMLSastojakType __fastcall TXMLSastojciType::Insert(const int Index)
{
  return (_di_IXMLSastojakType) AddItem(Index);
};

// TXMLSastojakType 

System::UnicodeString __fastcall TXMLSastojakType::Get_naziv()
{
  return GetAttributeNodes()->Nodes[System::UnicodeString("naziv")]->NodeValue.operator System::UnicodeString();
};

void __fastcall TXMLSastojakType::Set_naziv(System::UnicodeString Value)
{
  SetAttribute(System::UnicodeString("naziv"), Value);
};

System::UnicodeString __fastcall TXMLSastojakType::Get_kolicina()
{
  return GetAttributeNodes()->Nodes[System::UnicodeString("kolicina")]->NodeValue.operator System::UnicodeString();
};

void __fastcall TXMLSastojakType::Set_kolicina(System::UnicodeString Value)
{
  SetAttribute(System::UnicodeString("kolicina"), Value);
};
