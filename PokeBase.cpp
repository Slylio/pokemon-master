#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <set>
#include "pokemon.h"
#include "PokeBase.h"

using namespace std;
//Constructeur avec nomFichier
PokeBase::PokeBase(string nomFile){
	//file.open(nomFile);
	string line,word;
	ifstream file (nomFile);
	if (file.fail()){
		cout<<"Fail to open File "<< nomFile <<endl;
		exit(1);
	} else {
		cout<<"Opening :" << nomFile <<endl;
	}

	while (!file.eof()){
		getline(file,line);
		pokemons.push_back(Pokemon(line));
	}
}

PokeBase::PokeBase(vector<Pokemon> &other){
	this->pokemons=other;
}
/*
PokeBase PokeBase::filtre_type(string type) const{
	vector<Pokemon> res;
	vector<Pokemon>::const_iterator it=find(pokemons.begin(),pokemons.end(),type); //occurence sur le premier élément
	it!=pokemons.end();
	res.push_back(*it);
	if (res.empty()) res=pokemons; //type invalide
	return PokeBase(res); //constructeur qui prend un vecteur en paramètre
}
		
set<string> PokeBase::get_types() const {
	set<string>=res;
	for_each(pokemons.begin(),pokemons.end(),[&res](const Pokemon& p)->void{	//on doit capturer res pour y avoir accès (on doit capturer par référence pour modifier et non avoir une copie)
	if (p.getType1()!="") res.insert(p.getType1());
	if (p.getType2()!="") res.insert(p.getType2());
	return res;
}
*/