//---------------------------------------------------------------------------

#ifndef KonfiguracijaH
#define KonfiguracijaH
//---------------------------------------------------------------------------

namespace YummyLog {
	class Konfiguracija {

		static Konfiguracija* instanca;


		Konfiguracija();
		Konfiguracija(Konfiguracija const&){};
		Konfiguracija& operator=(Konfiguracija const&){};

	public:
		static Konfiguracija* getSingleton();


		struct {
			struct {
				int sirina, visina, lijevo, gore;
				UnicodeString naslov;
			} glavniProzor;

		} konfiguracija;
	};
};

#endif
