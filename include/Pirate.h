#pragma once
// #ifndef PIRATE_H
// #define PIRATE_H

#include "Ship.h"
#include "Raid.h"
#include <string>
#include <vector>

class Ship;
class Raid;

class Pirate
{
public:
  Pirate(std::string firstName, std::string lastName, int age, Ship *ship);
  ~Pirate();
  std::string getFirstName() const;
  std::string getLastName() const;
  std::string getFullName() const;
  int getAge() const;
  Ship* getShip() const;
  std::vector<Raid*> getRaids() const;
  void setFirstName(std::string firstName);
  void setLastName(std::string lastName);
  void setAge(int age);
  void setShip(Ship *ship, bool first);
  void addRaid(Raid *raid, bool first);
  bool removeRaid(Raid *raid, bool first);

private:
  std::string firstName;
  std::string lastName;
  int age;
  Ship *ship;
  std::vector<Raid*> raids;
};

// #endif
