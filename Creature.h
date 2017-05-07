#ifndef CREATURE_H
#define CREATURE_H

#include <string>

class Creature {

public:
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

  /*
  * makeAttack
  * Takes argument of Creature pointer
  * Rolls d20 to see if hits
  * Returns int, indicating the severity of the attack
  */
  virtual int makeAttack(Creature*);

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

  //Hitpoints
  int currenthp;
  int totalhp;

  //Dependent on equipment and ability scores
  int physDefense;
  int magDefense;
  int physAttack;
  int magAttack;
  int avoidability;

  std::string name;


};

#endif
