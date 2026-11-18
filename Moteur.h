#ifndef Moteur_H
#define Moteur_H
#include <string>
class cMoteur{
private:
	float cylindre;
	int puissance;
	std::string typecarburant;
	bool enMarche;
	int regime;

public:
	cMoteur();
	cMoteur(float _cylindre, int _puissance, std::string _typecarburant, int _regime);
	~cMoteur();
	
	void demarer();
	void arreter();
	void accelerer(int trmin);
	void getPuissance() const;
	void afficher() const;
};
#endif