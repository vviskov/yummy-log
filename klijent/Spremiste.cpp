//---------------------------------------------------------------------------

#pragma hdrstop

#include "Spremiste.h"
#include <stdio.h>

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

	_di_IXMLReceptiType Spremiste::getRecepti() const {
		return this->recepti;
	}

	_di_IXMLSastojciType Spremiste::getSastojci() const {
		return this->sastojci;
	}

	void Spremiste::setRecepti(_di_IXMLReceptiType recepti) {
		this->recepti = recepti;
	}

	void Spremiste::setSastojci(_di_IXMLSastojciType sastojci) {
		this->sastojci = sastojci;
    }
};
