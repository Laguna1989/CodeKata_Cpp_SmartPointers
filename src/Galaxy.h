//
// Created by Laguna_HP on 20.04.2021.
//

#ifndef CPPSMARTPOINTERCODEKATA_GALAXY_H
#define CPPSMARTPOINTERCODEKATA_GALAXY_H

#include <vector>

namespace AwefulApi {
class Sprite;
}

class System;

class Galaxy {
public:
    Galaxy(std::size_t system_count);
    ~Galaxy();
    std::size_t get_system_count() const;

    void add_ship_to_system(std::size_t system_index);

    float total_mass() const;
    void admire_galaxy_picture() const;

private:
    std::vector<System*> m_systems;
    AwefulApi::Sprite* m_sprite;
};



#endif // CPPSMARTPOINTERCODEKATA_GALAXY_H
