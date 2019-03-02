#ifndef PIRATE_H
#define PIRATE_H

#include "Ship.h"
#include "Raid.h"
#include <string>
#include <vector>

class Pirate
{
public:
  Pirate(std::string firstName, std::string lastName, int age, Ship ship);
  ~Pirate();
  std::string getFirstName();
  std::string getLastName();
  std::string getFullName();
  int getAge();
  Ship getShip();
  std::vector<Raid> getRaids();
  void setFirstName(std::string firstName);
  void setLastName(std::string lastName);
  void setAge(int age);
  void setShip(Ship ship);
  void addRaid(Raid raid, bool first);
  bool removeRaid(Raid raid, bool first);

private:
  std::string firstName;
  std::string lastName;
  std::int age;
  Ship ship;
  std::vector<Raid> raids;
};

#endif
