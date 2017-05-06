#ifndef WARRIOR_H
#define WARRIOR_H

#include "RPC.h"
class Warrior : public RPC {

  public:
    Warrior(std::string nm);
    void levelUp();
};

#endif
