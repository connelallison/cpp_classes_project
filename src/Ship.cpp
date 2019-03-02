#include "../include/Ship.h"
#include "../include/Pirate.h"
#include <string>
#include <vector>
#include <algorithm>

Ship::Ship(std::string nameP)
{
  name = nameP;
}

std::string Ship::getName() const
{
  return name;
}
std::vector<Pirate> Ship::getPirates() const
{
  return pirates;
}
void Ship::setName(std::string nameP)
{
  name = nameP;
}

void Ship::addPirate(Pirate pirate, bool first)
{
  pirates.push_back(pirate);
  if (first) {
    pirate.setShip(this, false);
  }
}

bool Ship::removePirate(Pirate pirate, bool first)
{
  if (std::find(pirates.begin(), pirates.end(), pirate) != pirates.end()) {
    if (first) {
      pirate.setShip(NULL, false);
    }
    pirates.erase(std::remove(pirates.begin(), pirates.end(), pirate), pirates.end())
    return true;
  }
  return false;
}
