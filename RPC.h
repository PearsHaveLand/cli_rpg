/*
Will have subclasses for each character type:
	Paladin, Wizard, etc.
*/
#ifndef RPC_H
#define RPC_H

#include "Dice.cpp"
#include <string>
#include <iostream>
class RPC {
	public:
		RPC(string nm);

		//Getters
		int getLevel(){return level;}
		int getVitality(){return vitality;}
		int getStrength(){return strength;}
		int getDexterity(){return dexterity;}
		int getWisdom(){return wisdom;}
		int getIntelligence(){return intelligence;}
		int getCharisma(){return charisma;}
		int getPhysDefense(){return physDefense;}
		int getMagDefense(){return magDefense;}
		int getPhysAttack(){return physAttack;}
		int getMagAttack(){return magAttack;}
		int getAvoidability(){return avoidability;}
		string getName(){return name;}
		void getClass(){return charClass;}
		void printStats();

	private:
		//The main ability scores of the character
		int vitality;
		int strength;
		int dexterity;
		int wisdom;
		int intelligence;
		int charisma;

		//Hitpoints
		int currenthp;
		int totalhp;

		//Dependent on equipment and ability scores
		int physDefense;
		int magDefense;
		int physAttack;
		int magAttack;
		int avoidability;

		//For levelling
		int level;
		int currentExp;
		int expToNext;

		string name;
		string charClass;

		//Setters
		void setVitality(int vit);
		void setStrength(int str);
		void setDexterity(int dex);
		void setWisdom(int wis);
		void setIntelligence(int intel);
		void setCharisma(int cha);
		void setPhysDefense(int def);
		void setMagDefense(int def);
		void setPhysAttack(int atk);
		void setMagAttack(int atk);
		void setAvoidability(int avo);
		void setName(std::string nm);
		void setLevel(int lv);
		void setClass();

		//Levels the character up
		virtual void levelUp();

};

#endif
