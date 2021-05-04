//
// Created by Laguna_HP on 20.04.2021.
//

#ifndef CPPSMARTPOINTERCODEKATA_SYSTEM_H
#define CPPSMARTPOINTERCODEKATA_SYSTEM_H

#include <vector>
class Ship;

class System {
public:
    float get_total_system_mass();
    float get_ships_mass();
    float get_base_mass();

    void add_ship();

    void update_ship_positions();
private:
    std::vector<Ship*> m_ships;
};

#endif // CPPSMARTPOINTERCODEKATA_SYSTEM_H
