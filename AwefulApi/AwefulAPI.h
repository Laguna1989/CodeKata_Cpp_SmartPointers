//
// Created by Laguna_HP on 20.04.2021.
//

#ifndef CPPSMARTPOINTERCODEKATA_AWEFULAPI_H
#define CPPSMARTPOINTERCODEKATA_AWEFULAPI_H

#include <cassert>
namespace AwefulApi {


class Sprite {
public:
    bool m_valid{false};

    ~Sprite();
    void look_at() const;
    bool m_correctly_destroyed{false};
};


Sprite* createSprite();
void destroySprite(Sprite* spr);

} // namespace AwefulAPI

#endif // CPPSMARTPOINTERCODEKATA_AWEFULAPI_H
