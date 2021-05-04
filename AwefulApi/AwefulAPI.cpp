//
// Created by Laguna_HP on 20.04.2021.
//

#include "AwefulAPI.h"

namespace AwefulApi {

void Sprite::look_at() const { assert(m_valid); }

Sprite::~Sprite()
{
    if (!m_correctly_destroyed) {
        assert(false);
    }
}

Sprite* createSprite()
{
    auto ptr = new Sprite();
    ptr->m_valid = true;
    return ptr;
}
void destroySprite(Sprite* spr)
{
    spr->m_correctly_destroyed = true;
    delete (spr);
}

} // namespace AwefulApi