/*
> Interface for basic player character
> Will have subclasses for each character type:
	Paladin, Wizard, etc.
*/
#ifndef RPC_H
#define RPC_H

#include "Dice.h"
#include "Creature.h"
#include "Monster.h"
#include <iostream>

class RPC : public Creature {
	public:
		RPC();
		RPC(std::string nm);

		//Getters
		void printStats();
		std::string getClass(){return charClass;}
		int getLevel(){return level;}

		//Setters
		void setLevel(int lv);
		void setClass(std::string cl);

	private:
		std::string charClass;

		//For levelling
		int level;
		int currentExp;
		int expToNext;
};
#endif

/*INHERITED FROM CREATURE**************************

		//Getters
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
		std::string getName(){return name;}
		//Levels the character up
		//Made virtual
		virtual void levelUp() = 0;


		// makeAttack
		// Takes argument of Monster pointer
	 	// Rolls d20 to see if hits
		// Returns int, indicating the severity of the attack

		virtual int makeAttack(Monster*);

		//Values added to actions based on
		//	the DnD 5e formula of (stat - 10) / 2
		int vitMod(){return (vitality - 10) / 2;}
		int strMod(){return (strength - 10) / 2;}
		int dexMod(){return (dexterity - 10) / 2;}
		int wisMod(){return (wisdom - 10) / 2;}
		int intMod(){return (intelligence - 10) / 2;}
		int chaMod(){return (charisma - 10) / 2;}

	protected:
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

	private:
		//The main ability scores of the creature
		int vitality;
		int strength;
		int dexterity;
		int wisdom;
		int intelligence;
		int charisma;
		std::string name;

		//Hitpoints
		int currenthp;
		int totalhp;

		//Dependent on equipment and ability scores
		int physDefense;
		int magDefense;
		int physAttack;
		int magAttack;
		int avoidability;

*/
