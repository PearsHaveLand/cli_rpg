#include "Warrior.h"

Warrior::Warrior(string nm) : RPC(nm){}

//Increases the character's stats based on the character's supposed
//  growth rate
void Warrior::levelUp(){
  int addVit, addStr, addDex, addWis, addInt, addCha;
  cout << name << endl;
  cout << charClass << endl;
  cout << "---------------------" << endl;

  cout << "Level: " << getLevel() << "+ 1" << endl;
  setLevel(getLevel() + 1);

  addVit = rollD4();
  cout << "VIT: " << getVitality() << " + " << addVit << endl;
  setVitality(getVitality() + addVit);

  addStr = rollD4();
  cout << "STR: " << getStrength() << " + " << addStr << endl;
  setStrength(getStrength() + addStr);

  addDex = rollD2();
  cout << "DEX: " getDexterity() << " + " << addDex << endl;
  setDexterity(getDexterity() + addDex);

  addWis = rollD2();
  cout << "WIS: " << getWisdom() << " + " << addWis << endl;
  setWisdom(getWisdom() + addWis);

  addInt = rollD2();
  cout << "INT: " << getIntelligence() << " + " << addInt << endl;
  setIntelligence(getIntelligence() + addInt);

  addCha = rollD4();
  cout << "CHA: " << getCharisma() << " + " << addCha << endl;
  setCharisma(getCharisma() + addCha);

  cout << endl;
  cout << "=====================" << endl;
  cout << endl;
  
  printStats();
}
