#pragma once
// #ifndef SHIP_H
// #define SHIP_H

#include "Pirate.h"
#include <string>
#include <vector>

class Pirate;

class Ship
{
public:
  Ship(std::string name);
  std::string getName() const;
  std::vector<Pirate*> getPirates() const;
  void setName(std::string name);
  void addPirate(Pirate *pirate, bool first);
  bool removePirate(Pirate *pirate, bool first);


private:
  std::string name;
  std::vector<Pirate*> pirates;
};

// #endif
