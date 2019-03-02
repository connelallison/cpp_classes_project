#include "Pirate.h"
#include "Raid.h"
#include "Ship.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  Ship ship1 = Ship("The Black Pearl");
  Pirate pirate1 = Pirate("Jack", "Sparrow", 31, ship1);
  ship1.addPirate(pirate1, true);
  Raid raid1 = Raid("Tortuga", "shiny object");
  raid1.addPirate(pirate1, true);
  std::cout << ship1.getName() << '\n'
            << ship1.getPirates()[0].getFullName() << '\n'
            << pirate1.getFirstName() << '\n'
            << pirate1.getLastName() << '\n'
            << pirate1.getAge() << '\n'
            << pirate1.getShip().getName() << '\n'
            << pirate1.getRaids()[0].getLocation() << '\n'
            << raid1.getLoot();
  Ship ship2 = Ship("The Flying Dutchman");
  ship2.addPirate(Pirate("John", "Silver", 57, ship2), true);
  Raid raid2 = Raid("Treasure Island", "Lost Gold");
  ship2.getPirates()[0].addRaid(raid2);
  std::cout << raid2.getPirates()[0].getFullName() << '\n';
  ship2.removePirate(ship2.getPirates()[0]);
  raid2.removePirate(raid2.getPirates()[0]);
  ship1.removePirate(pirate1);
  pirate1.removeRaid(raid1);
  std::cout << pirate1.getShip() << '\n'
            << ship1.getPirates().size() << '\n'
            << pirate1.getRaids().size() << '\n'
            << raid1.getPirates().size() << '\n';
  return 0;
}
