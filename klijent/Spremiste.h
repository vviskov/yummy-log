//---------------------------------------------------------------------------

#ifndef SpremisteH
#define SpremisteH

#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>

#include "recepti.h"


namespace YummyLog {
	class Spremiste {

		static Spremiste* instanca;

		_di_IXMLrecipeType selektiranRecept;

		Spremiste() : selektiranRecept(NULL) {};
		Spremiste(Spremiste const&){};
		Spremiste& operator=(Spremiste const&){};

	public:
		static Spremiste* getSingleton();

		_di_IXMLrecipesType dohvatiRecepte();
		void postaviOdabranRecept(_di_IXMLrecipeType recept);
		_di_IXMLrecipeType dohvatiSelektiranRecept();
		void obrisiSelektiranRecept();
		void spremiRecept(_di_IXMLrecipeType recept);
	};
};
//---------------------------------------------------------------------------
#endif
