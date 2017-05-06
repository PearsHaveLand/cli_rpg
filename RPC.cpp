#include "RPC.h"

RPC::RPC(std::string nm){
	setName(nm);
	setVitality(10);
	setStrength(10);
	setDexterity(10);
	setWisdom(10);
	setIntelligence(10);
	setCharisma(10);
}

void RPC::printStats(){
	std::cout << name << std::endl;
	std::cout << charClass << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "VIT: " << getVitality() << std::endl;
	std::cout << "STR: " << getStrength() << std::endl;
	std::cout << "DEX: " << getDexterity() << std::endl;
	std::cout << "WIS: " << getWisdom() << std::endl;
	std::cout << "INT: " << getIntelligence() << std::endl;
	std::cout << "CHA: " << getCharisma() << std::endl;

}

//Setters//////////////////////////
void RPC::setName(std::string nm){
	name = nm;
}
void RPC::setVitality(int vit){
	vitality = vit;
}
void RPC::setStrength(int str){
	strength = str;
}
void RPC::setDexterity(int dex){
	dexterity = dex;
}
void RPC::setWisdom(int wis){
	wisdom = wis;
}
void RPC::setIntelligence(int intel){
	intelligence = intel;
}
void RPC::setCharisma(int cha){
	charisma = cha;
}
void RPC::setPhysDefense(int def){
	physDefense = def;
}
void RPC::setMagDefense(int def){
	magDefense = def;
}
void RPC::setPhysAttack(int atk){
	physAttack = atk;
}
void RPC::setMagAttack(int atk){
	magAttack = atk;
}
void RPC::setAvoidability(int avo){
	avoidability = avo;
}

void RPC::setLevel(int lv){
	level = lv;
}

void RPC::setClass(std::string cl) {
	charClass = cl;
}
