#include "RPC.h"
#include <string>
#include <iostream>
using namespace std;

RPC::RPC(string nm){
	this->setName(nm);
	this->setVitality(10);
	this->setStrength(10);
	this->setDexterity(10);
	this->setWisdom(10);
	this->setIntelligence(10);
	this->setCharisma(10);
}

void RPC::printStats(){
	cout << name << endl;
	cout << "---------------------" << endl;
	cout << "VIT: " << getVitality() << endl;
	cout << "STR: " << getStrength() << endl;
	cout << "DEX: " << getDexterity() << endl;
	cout << "WIS: " << getWisdom() << endl;
	cout << "INT: " << getIntelligence() << endl;
	cout << "CHA: " << getCharisma() << endl;

}
//Getters/////////////////////
/*
int RPC::getLevel(){
	return this->level;
}
int RPC::getVitality() {
	return this->vitality;
}
int RPC::getStrength() {
	return this->strength;
}
int RPC::getDexterity(){
	return this->dexterity;
}
int RPC::getWisdom(){
	return this->wisdom;
}
int RPC::getIntelligence(){
	return this->intelligence;
}
int RPC::getCharisma(){
	return this->charisma;
}
int RPC::getPhysDefense(){
	return this->physDefense;
}
int RPC::getMagDefense(){
	return this->magDefense;
}
int RPC::getPhysAttack(){
	return this->physAttack;
}
int RPC::getMagAttack(){
	return this->magAttack;
}
int RPC::getAvoidability(){
	return this->avoidability;
}
string RPC::getName(){
	return this->name;
}

*/

//Setters//////////////////////////
void RPC::setName(string nm){
	this->name = nm;
}
void RPC::setVitality(int vit){
	this->vitality = vit;
}
void RPC::setStrength(int str){
	this->strength = str;
}
void RPC::setDexterity(int dex){
	this->dexterity = dex;
}
void RPC::setWisdom(int wis){
	this->wisdom = wis;
}
void RPC::setIntelligence(int intel){
	this->intelligence = intel;
}
void RPC::setCharisma(int cha){
	this->charisma = cha;
}
void RPC::setPhysDefense(int def){
	this->physDefense = def;
}
void RPC::setMagDefense(int def){
	this->magDefense = def;
}
void RPC::setPhysAttack(int atk){
	this->physAttack = atk;
}
void RPC::setMagAttack(int atk){
	this->magAttack = atk;
}
void RPC::setAvoidability(int avo){
	this->avoidability = avo;
}
