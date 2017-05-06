#include "Dice.h"
#include <cstdlib>

int Dice::rollD2() {
  //Random number between 1 and 2
  int random = (rand() % 2) + 1;
  return random;
}

int Dice::rollD4() {
  //Random number between 1 and 4
  int random = (rand() % 4) + 1;
  return random;
}

int Dice::rollD6() {
  //Random number between 1 and 6
  int random = (rand() % 6) + 1;
  return random;
}

int Dice::rollD8() {
  //Random number between 1 and 2
  int random = (rand() % 8) + 1;
  return random;
}

int Dice::rollD10() {
  //Random number between 1 and 2
  int random = (rand() % 10) + 1;
  return random;
}

int Dice::rollD12() {
  //Random number between 1 and 2
  int random = (rand() % 12) + 1;
  return random;
}

int Dice::rollD20() {
  //Random number between 1 and 2
  int random = (rand() % 20) + 1;
  return random;
}
