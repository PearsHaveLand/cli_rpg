#include "Creature.h"

int Creature::makeAttack(Creature* target) {
	int dmgDealt;
	//The roll to attack
	int atkRoll = Dice::rollD20() + strMod();

	//If greater than the avoidability of the target
	if (atkRoll > target->getAvoidability()) {
		//If attacker's physical attack > target's physical defense
		if (getPhysAttack() > target->getPhysDefense()) {
			dmgDealt = (physAttack - target->getPhysDefense()) * (1 + ((double) Dice::rollD4() / 10));
		}
		else {
			dmgDealt = 1;
		}
	}
	//If attack misses
	else {
		dmgDealt = 0;
	}
	return dmgDealt;
}

//Setters//////////////////////////
void Creature::setName(std::string nm){
	name = nm;
}
void Creature::setVitality(int vit){
	vitality = vit;
}
void Creature::setStrength(int str){
	strength = str;
}
void Creature::setDexterity(int dex){
	dexterity = dex;
}
void Creature::setWisdom(int wis){
	wisdom = wis;
}
void Creature::setIntelligence(int intel){
	intelligence = intel;
}
void Creature::setCharisma(int cha){
	charisma = cha;
}
void Creature::setPhysDefense(int def){
	physDefense = def;
}
void Creature::setMagDefense(int def){
	magDefense = def;
}
void Creature::setPhysAttack(int atk){
	physAttack = atk;
}
void Creature::setMagAttack(int atk){
	magAttack = atk;
}
void Creature::setAvoidability(int avo){
	avoidability = avo;
}
