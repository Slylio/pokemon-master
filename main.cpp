#include <fstream>
#include <map>
#include <string>
#include "pokemon.h"
#include "PokeBase.cpp"

using namespace std;
template<typename key, typename value>
class map_to_stream {
	std::ostream& flux;
	public:
		map_to_stream(std::ostream& o) : flux(o) {};
		void operator()(const std::pair<key, value>& p) {
		flux <<setfill('*')<< setw(80)<<"" << p.first << setw(80)<<"" << setfill(' ')<< std::endl << p.second << std::endl;
	}
};

int main(){
	Pokemon poke1=Pokemon("Bulbasaur,Grass,Poison,318,45,49,49,65,65,45,false");
    cout<<poke1<<endl;
	//ofstream file("pokemon.txt"); //ouverture en écriture
	/*map<string,PokeBase>*/ //auto groupS=base.group_by_types();
	//map_to_stream<string,PokeBase> afficheur(file);
	//for_each(group.begin(),groups.end(),groups.end(),afficheur);
}
