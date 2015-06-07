//---------------------------------------------------------------------------

#ifndef KonfiguracijaH
#define KonfiguracijaH
//---------------------------------------------------------------------------

namespace YummyLog {

	struct WindowConf {
		int sirina, visina, lijevo, gore;
	};

	class Konfiguracija {

		static Konfiguracija* instanca;


		Konfiguracija();
		Konfiguracija(Konfiguracija const&){};
		Konfiguracija& operator=(Konfiguracija const&){};

	public:
		static Konfiguracija* getSingleton();
        void spremi();

		struct {
			WindowConf pocetna;
			WindowConf lista;
			WindowConf pregled;
			WindowConf dodaj;
			WindowConf uredi;
		} konfiguracija;
	};
};

#endif
