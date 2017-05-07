#include "RPC.h"
#include "Creature.cpp"

RPC::RPC(std::string nm){
	setName(nm);
	setVitality(10);
	setStrength(10);
	setDexterity(10);
	setWisdom(10);
	setIntelligence(10);
	setCharisma(10);
	setLevel(1);
}

//Outputs the stats of the RPC
void RPC::printStats(){
	std::cout << getName() << std::endl;
	std::cout << getClass() << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "VIT: " << getVitality() << std::endl;
	std::cout << "STR: " << getStrength() << std::endl;
	std::cout << "DEX: " << getDexterity() << std::endl;
	std::cout << "WIS: " << getWisdom() << std::endl;
	std::cout << "INT: " << getIntelligence() << std::endl;
	std::cout << "CHA: " << getCharisma() << std::endl;

}

void RPC::setLevel(int lv){
	level = lv;
}

void RPC::setClass(std::string cl) {
	charClass = cl;
}
