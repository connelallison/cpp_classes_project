#ifndef SHIP_H
#define SHIP_H

#include "Pirate.h"
#include <string>
#include <vector>

class Ship
{
public:
  Ship(std::string name);
  std::string getName();
  std::vector<Pirate> getPirates();
  void setName(std::string name);
  void addPirate(Pirate pirate);
  bool removePirate(Pirate pirate);


private:
  std::string name;
  std::vector<Pirate> pirates;
};

#endif
