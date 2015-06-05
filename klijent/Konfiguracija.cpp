//---------------------------------------------------------------------------
#include <Registry.hpp>
#pragma hdrstop

#include "Konfiguracija.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

namespace YummyLog {
	Konfiguracija* Konfiguracija::instanca = NULL;

	Konfiguracija* Konfiguracija::getSingleton() {
		if (instanca == NULL) {
			instanca = new Konfiguracija();
		}
		return instanca;
	}

	Konfiguracija::Konfiguracija() {

		TIniFile* ini;
		ini = new TIniFile(GetCurrentDir() + "\\STARTUP.INI");

		instanca->konfiguracija.glavniProzor.naslov = ini->ReadString("Glavni Prozor", "Title", "INI read/write example");
		instanca->konfiguracija.glavniProzor.lijevo = ini->ReadInteger("Glavni Prozor", "X1", 100);
		instanca->konfiguracija.glavniProzor.gore = ini->ReadInteger("Glavni Prozor", "Y1", 100);
		instanca->konfiguracija.glavniProzor.sirina = ini->ReadInteger("Glavni Prozor", "X2", 690);
		instanca->konfiguracija.glavniProzor.visina = ini->ReadInteger("Glavni Proor", "Y2", 125);
		delete ini;
	}

};
