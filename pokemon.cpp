#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "pokemon.h"
#include <cctype>

using namespace std;

Pokemon::Pokemon(string line){
    string tmp;
    vector<string> attributes;
	stringstream streamData(line);				    
	while (getline(streamData,tmp,',')){
                attributes.push_back(tmp);
            }
            this->name=attributes.at(0);
            this->type_1=attributes.at(1);
            this->type_2=attributes.at(2);
            this->total=stoi(attributes.at(3));
            this->hp=stoi(attributes.at(4));
            this->attack=stoi(attributes.at(5));
            this->defense=stoi(attributes.at(6));
            this->sp_atk=stoi(attributes.at(7));
            this->sp_def=stoi(attributes.at(8));
            this->speed=stoi(attributes.at(9));
            if (attributes.at(10).compare("true")){
                this->legendary=true;
            } else this->legendary=false;
            cout<<"Construction d'un pokémon à l'adresse "<<this<<endl; 
}

Pokemon::Pokemon(const Pokemon& other):
		name(other.name), type_1(other.type_1), type_2(other.type_2),total(other.total),hp(other.hp),attack(other.attack),defense(other.defense),sp_atk(other.sp_atk),sp_def(other.sp_def),speed(other.speed), legendary(other.legendary){
			cout<<"Construction d'un pokemon à l'adresse "<<this<<" en copiant celui à l'adresse "<<&other<<endl;
}
/*
bool Pokemon::operator==(string& t) const{
	return type_1==t || type_2==t;
}

bool Pokemon::operator>(const Pokemon&) const{
	return attack+def>p.attack+p.def;
}
*/
const string& Pokemon::getType1() const{
	return type_1;
}
const std::string& Pokemon::getType2() const{
	return type_2;
}

ostream& operator<<(ostream& os, const Pokemon& pokemon){
    os<<pokemon.name<<"\t|\t"<<pokemon.type_1<<"\t|\t"<<pokemon.type_2<<"\t|\t"<<pokemon.total<<"\t|\t"<<pokemon.hp<<"\t|\t"<<pokemon.attack<<"\t|\t"<<pokemon.defense<<"\t|\t"<<pokemon.sp_atk<<"\t|\t"<<pokemon.sp_def<<"\t|\t"<<pokemon.speed<<"\t|\t"<<pokemon.legendary;
    return os;
}

/*
string toupper(const string& s){
	string res=s,
	transform(s.begin(),s.end(),res.begin),[](char c)->char{return toupper(c);});
	return res;
}
*/

