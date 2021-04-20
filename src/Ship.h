//
// Created by Laguna_HP on 20.04.2021.
//

#ifndef CPPSMARTPOINTERCODEKATA_SHIP_H
#define CPPSMARTPOINTERCODEKATA_SHIP_H

class System;

class Ship {
public:
    Ship(System* sys, float mass);
    float get_ship_mass() const;

    void navigate();

private:
    System* m_system;
    float m_mass;
};

#endif // CPPSMARTPOINTERCODEKATA_SHIP_H
