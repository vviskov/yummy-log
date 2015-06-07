//---------------------------------------------------------------------------

#pragma hdrstop

#include "Spremiste.h"
#include <stdio.h>

#include "recepti.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

namespace YummyLog {
	Spremiste* Spremiste::instanca = NULL;

	Spremiste* Spremiste::getSingleton() {
		if (instanca == NULL) {
			instanca = new Spremiste();
		}
		return instanca;
	}

	_di_IXMLrecipesType Spremiste::dohvatiRecepte() {
		TStringStream* response = new TStringStream("", TEncoding::UTF8, true);
		Idhttp::TIdHTTP* http = new Idhttp::TIdHTTP();

		http->Get(UnicodeString("http://localhost:3000/recipes"), response);

		UnicodeString ret = response->DataString;
		_di_IXMLrecipesType recepti = Getrecipes(LoadXMLData(response->DataString));

		delete response;
		delete http;

		return recepti;
	}

	void Spremiste::postaviOdabranRecept(_di_IXMLrecipeType recept) {
		this->selektiranRecept = recept;
	}

	_di_IXMLrecipeType Spremiste::dohvatiSelektiranRecept() {
		return this->selektiranRecept;
	}

	void Spremiste::obrisiSelektiranRecept() {
		Idhttp::TIdHTTP* http = new Idhttp::TIdHTTP();

        http->Request->ContentType = "text/xml";

		TStringStream* ts = new TStringStream(
			this->selektiranRecept->GetXML(),
			TEncoding::UTF8,
			true
		);

		http->Post(
			UnicodeString("http://localhost:3000/delete_recipe"),
			ts
		);

		delete http;
		delete ts;
	}

	void Spremiste::spremiRecept(_di_IXMLrecipeType recept) {
		Idhttp::TIdHTTP* http = new Idhttp::TIdHTTP();

        http->Request->ContentType = "text/xml";

		UnicodeString bla = recept->GetXML();

		TStringStream* ts = new TStringStream(
			recept->GetXML(),
			TEncoding::UTF8,
			true
		);

		http->Post(
			UnicodeString("http://localhost:3000/save_recipe"),
			ts
		);

		delete http;
		delete ts;
	}

};
