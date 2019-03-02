#include "../include/Raid.h"
#include "../include/Pirate.h"
#include <string>
#include <vector>
#include <algorithm>

Raid::Raid(std::string locationP, std::string lootP)
{
  location = locationP;
  loot = lootP;
}
std::string Raid::getLocation() const
{
  return location;
}
std::string Raid::getLoot() const
{
  return loot;
}
std::vector<Pirate*> Raid::getPirates() const
{
  return pirates;
}
void Raid::setLocation(std::string locationP)
{
  location = locationP;
}
void Raid::setLoot(std::string lootP)
{
  loot = lootP;
}
void Raid::addPirate(Pirate *pirate, bool first)
{
  pirates.push_back(pirate);
  if (first) {
    (*pirate).addRaid(this, false);
  }
}
bool Raid::removePirate(Pirate *pirate, bool first)
{
  if (std::find(pirates.begin(), pirates.end(), pirate) != pirates.end()) {
    if (first) {
      (*pirate).removeRaid(this, false);
    }
    pirates.erase(std::remove(pirates.begin(), pirates.end(), pirate), pirates.end());
    return true;
  }
  return false;
}
