#include "../include/Pirate.h"
#include "../include/Ship.h"
#include "../include/Raid.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

Pirate::Pirate(std::string firstNameP, std::string lastNameP, int ageP, Ship *shipP)
{
  firstName = firstNameP;
  lastName = lastNameP;
  age = ageP;
  ship = shipP;
}
Pirate::~Pirate()
{
  std::cout << getFullName() + ": Yarr." << '\n';
}
std::string Pirate::getFirstName() const
{
  return firstName;
}
std::string Pirate::getLastName() const
{
  return lastName;
}
std::string Pirate::getFullName() const
{
  return firstName + " " + lastName;
}
int Pirate::getAge() const
{
  return age;
}
Ship* Pirate::getShip() const
{
  return ship;
}
std::vector<Raid*> Pirate::getRaids() const
{
  return raids;
}
void Pirate::setFirstName(std::string firstNameP)
{
  firstName = firstNameP;
}
void Pirate::setLastName(std::string lastNameP)
{
  lastName = lastNameP;
}
void Pirate::setAge(int ageP)
{
  age = ageP;
}
void Pirate::setShip(Ship *shipP, bool first)
{
  if (shipP == NULL) {
    if (first) {
      (*ship).removePirate(this, false);
    }
  }
  ship = shipP;
  if (shipP != NULL) {
    if (first) {
      (*ship).addPirate(this, false);
    }
  }
}
void Pirate::addRaid(Raid *raid, bool first)
{
  raids.push_back(raid);
  if (first) {
    (*raid).addPirate(this, false);
  }
}
bool Pirate::removeRaid(Raid *raid, bool first)
{
  if (std::find(raids.begin(), raids.end(), raid) != raids.end()) {
    if (first) {
      (*raid).removePirate(this, false);
    }
    raids.erase(std::remove(raids.begin(), raids.end(), raid), raids.end());
    return true;
  }
  return false;
}
