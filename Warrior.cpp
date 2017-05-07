#include "Warrior.h"
#include "RPC.cpp"

Warrior::Warrior(std::string nm) : RPC::RPC(nm){
  setClass("Warrior");
}

//Increases the character's stats based on the character's supposed
//  growth rate
void Warrior::levelUp(){
  int addVit, addStr, addDex, addWis, addInt, addCha;

  /*
  *   Outputs the stats before levelling, with the level-up
  *     values being added. Ex:
  *
  *   Character_Name
  *   Character_Class + 1
  *   ---------------------
  *   Level: x + y
  *   VIT: x + y
  *   ...
  *   CHA: x + y
  *   =====================
  */
  std::cout << getName() << std::endl;
  std::cout << getClass() << std::endl;
  std::cout << "---------------------" << std::endl;

  std::cout << "Level: " << getLevel() << " + 1" << std::endl;
  setLevel(getLevel() + 1);

  addVit = Dice::rollD4();
  std::cout << "VIT: " << getVitality() << " + " << addVit << std::endl;
  setVitality(getVitality() + addVit);

  addStr = Dice::rollD4();
  std::cout << "STR: " << getStrength() << " + " << addStr << std::endl;
  setStrength(getStrength() + addStr);

  addDex = Dice::rollD2();
  std::cout << "DEX: " << getDexterity() << " + " << addDex << std::endl;
  setDexterity(getDexterity() + addDex);

  addWis = Dice::rollD2();
  std::cout << "WIS: " << getWisdom() << " + " << addWis << std::endl;
  setWisdom(getWisdom() + addWis);

  addInt = Dice::rollD2();
  std::cout << "INT: " << getIntelligence() << " + " << addInt << std::endl;
  setIntelligence(getIntelligence() + addInt);

  addCha = Dice::rollD4();
  std::cout << "CHA: " << getCharisma() << " + " << addCha << std::endl;
  setCharisma(getCharisma() + addCha);

  std::cout << "=====================" << std::endl;
  std::cout << std::endl;

  //Outputs the new stat totals
  printStats();
}
