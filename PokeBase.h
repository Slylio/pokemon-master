#ifndef POKEBASE
#define POKEBASE
#include <string>
#include <iostream>
#include <vector>
#include "pokemon.h"
#include <set>
class PokeBase{
	private:
		std::vector<Pokemon> pokemons;
	public:
        PokeBase(std::string);
        PokeBase(std::vector<Pokemon>&);
        //PokeBase filtre_type(string) const; 
        //std::set<string> getTypes() const;
};
#endif


