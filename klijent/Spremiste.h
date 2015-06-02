//---------------------------------------------------------------------------

#ifndef SpremisteH
#define SpremisteH

#include "ReceptiMock.h"

namespace YummyLog {
	class Spremiste {

		static Spremiste* instanca;

		_di_IXMLReceptiType recepti;
		_di_IXMLSastojciType sastojci;

		Spremiste(){};
		Spremiste(Spremiste const&){};
		Spremiste& operator=(Spremiste const&){};

	public:
		static Spremiste* getSingleton();

		_di_IXMLReceptiType getRecepti() const;
		_di_IXMLSastojciType getSastojci() const;

		void setRecepti(_di_IXMLReceptiType recepti);
		void setSastojci(_di_IXMLSastojciType sastojci);
	};
};
//---------------------------------------------------------------------------
#endif
