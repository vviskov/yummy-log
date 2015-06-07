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
		ini = new TIniFile(GetCurrentDir() + "\\conf.ini");

		konfiguracija.pocetna.lijevo = ini->ReadInteger("Pocetna", "lijevo", 500);
		konfiguracija.pocetna.gore = ini->ReadInteger("Pocetna", "gore", 400);
		konfiguracija.pocetna.sirina = ini->ReadInteger("Pocetna", "sirina", 400);
		konfiguracija.pocetna.visina = ini->ReadInteger("Pocetna", "visina", 400);

		konfiguracija.lista.lijevo = ini->ReadInteger("Lista recepata", "lijevo", 500);
		konfiguracija.lista.gore = ini->ReadInteger("Lista recepata", "gore", 400);
		konfiguracija.lista.sirina = ini->ReadInteger("Lista recepata", "sirina", 400);
		konfiguracija.lista.visina = ini->ReadInteger("Lista recepata", "visina", 400);

		konfiguracija.pregled.lijevo = ini->ReadInteger("Pregled recepata", "lijevo", 500);
		konfiguracija.pregled.gore = ini->ReadInteger("Pregled recepata", "gore", 400);
		konfiguracija.pregled.sirina = ini->ReadInteger("Pregled recepata", "sirina", 400);
		konfiguracija.pregled.visina = ini->ReadInteger("Pregled recepata", "visina", 400);

		konfiguracija.dodaj.lijevo = ini->ReadInteger("Dodaj recept", "lijevo", 500);
		konfiguracija.dodaj.gore = ini->ReadInteger("Dodaj recept", "gore", 400);
		konfiguracija.dodaj.sirina = ini->ReadInteger("Dodaj recept", "sirina", 400);
		konfiguracija.dodaj.visina = ini->ReadInteger("Dodaj recept", "visina", 400);

		konfiguracija.uredi.lijevo = ini->ReadInteger("Uredi recept", "lijevo", 500);
		konfiguracija.uredi.gore = ini->ReadInteger("Uredi recept", "gore", 400);
		konfiguracija.uredi.sirina = ini->ReadInteger("Uredi recept", "sirina", 400);
		konfiguracija.uredi.visina = ini->ReadInteger("Uredi recept", "visina", 400);
		delete ini;
	}

	void Konfiguracija::spremi() {
          TIniFile* ini;
		ini = new TIniFile(GetCurrentDir() + "\\conf.ini");

		ini->WriteInteger("Pocetna", "lijevo", konfiguracija.pocetna.lijevo);
		ini->WriteInteger("Pocetna", "gore", konfiguracija.pocetna.gore);
		ini->WriteInteger("Pocetna", "sirina", konfiguracija.pocetna.sirina);
		ini->WriteInteger("Pocetna", "visina", konfiguracija.pocetna.visina);

		ini->WriteInteger("Lista recepata", "lijevo", konfiguracija.lista.lijevo);
		ini->WriteInteger("Lista recepata", "gore", konfiguracija.lista.gore);
		ini->WriteInteger("Lista recepata", "sirina", konfiguracija.lista.sirina);
		ini->WriteInteger("Lista recepata", "visina", konfiguracija.lista.visina);

		ini->WriteInteger("Pregled recepata", "lijevo", konfiguracija.pregled.lijevo);
		ini->WriteInteger("Pregled recepata", "gore", konfiguracija.pregled.gore);
		ini->WriteInteger("Pregled recepata", "sirina", konfiguracija.pregled.sirina);
		ini->WriteInteger("Pregled recepata", "visina", konfiguracija.pregled.visina);

		ini->WriteInteger("Dodaj recept", "lijevo", konfiguracija.dodaj.lijevo);
		ini->WriteInteger("Dodaj recept", "gore", konfiguracija.dodaj.gore);
		ini->WriteInteger("Dodaj recept", "sirina", konfiguracija.dodaj.sirina);
		ini->WriteInteger("Dodaj recept", "visina", konfiguracija.dodaj.visina);

		ini->WriteInteger("Uredi recept", "lijevo", konfiguracija.uredi.lijevo);
		ini->WriteInteger("Uredi recept", "gore", konfiguracija.uredi.gore);
		ini->WriteInteger("Uredi recept", "sirina", konfiguracija.uredi.sirina);
		ini->WriteInteger("Uredi recept", "visina", konfiguracija.uredi.visina);

		delete ini;
	}
};
