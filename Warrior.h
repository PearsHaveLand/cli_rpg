#ifndef WARRIOR_H
#define WARRIOR_H

#include "RPC.h"

class Warrior : public RPC {

  public:
    Warrior(string nm);
  private:
    void levelUp();
};

#endif
