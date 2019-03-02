#pragma once
// #ifndef RAID_H
// #define RAID_H

#include "Pirate.h"
#include <string>
#include <vector>

class Pirate;

class Raid
{
public:
  Raid(std::string location, std::string loot);
  std::string getLocation() const;
  std::string getLoot() const;
  std::vector<Pirate*> getPirates() const;
  void setLocation(std::string location);
  void setLoot(std::string loot);
  void addPirate(Pirate *pirate, bool first);
  bool removePirate(Pirate *pirate, bool first);

private:
  std::string location;
  std::string loot;
  std::vector<Pirate*> pirates;
};

// #endif
