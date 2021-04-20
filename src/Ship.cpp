//
// Created by Laguna_HP on 20.04.2021.
//

#include "Ship.h"
#include <cassert>

#include "System.h"
Ship::Ship(System* system, float mass)
    : m_system { system }
    , m_mass { mass }
{
}

float Ship::get_ship_mass() const { return m_mass; }

void Ship::navigate() { assert(m_system); }
