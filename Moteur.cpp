#include "Moteur.h"
#include <string>

CMoteur::CMoteur() {
	
	cylindre = 1.2;
	puissance = 75;
	typecarburant = "Essence"
	enMarche = false;
	regime = 0;
}

cMoteur::cMoteur(float _cyl, int _puiss, std::string _carb, int _regime);
cylindre = cyl;
puissance = puiss;
carburant = carb;
enMarche = false;
regime = 0;
}

cMoteur::~cMoteur() {
	std::cout << "Destructeur" << std::endl;
}

Void cMoteur::demarer() {
	enMarche = true
		regime = 900;
	std::cout << "moteur est deja en marche" << std::endl;
}

Void cMoteur::arreter() {
	enMarche = false;
	regime = 0;
}

Void cMoteur::accelerer(int trMin) {
	if (enmarche)
	{
		vitesse += valeur;
		regime += trMin;
		if (regime > 900)
		{
			regime = 900;
		}
	}
}

int cMoteur::getpuissance() const {
	return puissance;
}

Void cMoteur::afficher() const {
	std::cout << "caractéristiques du moteur:" << std::endl;
	std::cout << "Cylindre: " << cylindre << "L" << std::endl;
	std::cout << "Puissance: " << puissance << "ch" << std::endl;
	std::cout<< "Carburant: " << typecarburant << std::endl;
	std::cout << "Etat: " << (enMarche ? "Demarrer" : "Arreter") << std::endl;
	std::cout<< "Regime: " << regime << "tr/min" << std::endl;
}
