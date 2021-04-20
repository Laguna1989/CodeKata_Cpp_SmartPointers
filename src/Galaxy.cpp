//
// Created by Laguna_HP on 20.04.2021.
//

#include "Galaxy.h"
#include "../AwefulApi/AwefulAPI.h"
#include "System.h"

Galaxy::Galaxy(std::size_t system_count)
{
    for (std::size_t i = 0U; i != system_count; ++i) {
        m_systems.push_back(new System());
    }
    m_sprite = AwefulApi::createSprite();
}

Galaxy::~Galaxy()
{
    AwefulApi::destroySprite(m_sprite);
    m_systems.clear();
}

std::size_t Galaxy::get_system_count() const { return m_systems.size(); }
float Galaxy::total_mass()
{
    float sum {0};
    for (auto s : m_systems) {
        sum += s->get_total_system_mass();
    }
    return sum;
}
void Galaxy::admire_picture() { m_sprite->look_at(); }
System* Galaxy::get_system(int index) { return m_systems.at(index); }
