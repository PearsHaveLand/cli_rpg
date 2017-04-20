#include "RPC.h"
using namespace std;

RPC::RPC(string nm){
	setName(nm);
	setVitality(10);
	setStrength(10);
	setDexterity(10);
	setWisdom(10);
	setIntelligence(10);
	setCharisma(10);
}

void RPC::printStats(){
	cout << name << endl;
	cout << charClass << endl;
	cout << "---------------------" << endl;
	cout << "VIT: " << getVitality() << endl;
	cout << "STR: " << getStrength() << endl;
	cout << "DEX: " << getDexterity() << endl;
	cout << "WIS: " << getWisdom() << endl;
	cout << "INT: " << getIntelligence() << endl;
	cout << "CHA: " << getCharisma() << endl;

}

//Setters//////////////////////////
void RPC::setName(string nm){
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
