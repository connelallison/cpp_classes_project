#include "../include/Pirate.h"
#include "../include/Ship.h"
#include "../include/Raid.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

Pirate::Pirate(std::string firstNameP, std::string lastName, int ageP, Ship shipP)
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
std::string Pirate::getFirstName()
{
  return firstName;
}
std::string Pirate::getLastName()
{
  return lastName;
}
std::string Pirate::getFullName()
{
  return firstName + " " + lastName;
}
int Pirate::getAge()
{
  return age;
}
Ship Pirate::getShip()
{
  return ship;
}
std::vector<Raid> Pirate::getRaids()
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
void Pirate::setShip(Ship shipP, bool first)
{
  if (shipP == null) {
    if (first) {
      ship.removePirate(this, false);
    }
  }
  ship = shipP;
  if (shipP != null) {
    if (first) {
      ship.addPirate(this, false);
    }
  }
}
void Pirate::addRaid(Raid raid, bool first)
{
  raids.push_back(raid);
  if (first) {
    raid.addPirate(this, false);
  }
}
bool Pirate::removeRaid(Raid raid, bool first)
{
  if (raids.find(raid) != raids.end()) {
    if (first) {
      raid.removePirate(this, false);
    }
    raids.erase(raids.remove(raids.begin(), raids.end(), raid), raids.end());
    return true;
  }
  return false;
}
