//
// Created by Laguna_HP on 20.04.2021.
//

#include "System.h"
#include "Ship.h"

float System::get_total_system_mass() { return get_ships_mass() + get_base_mass(); }
float System::get_ships_mass()
{
    float sum { 0.0f };
    for (auto s : m_ships) {
        sum += s->get_ship_mass();
    }
    return sum;
}
float System::get_base_mass() { return 2.0f; }
void System::add_ship() { m_ships.push_back(new Ship(this, 0.25f)); }
void System::update_ship_positions() {
    for(auto s : m_ships)
    {
        s->navigate();
    }
}

