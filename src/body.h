//
// Created by samuel on 27/06/2020.
//

#ifndef PHXSPC_BODY_H
#define PHXSPC_BODY_H

#include <glm/glm.hpp>

// Only sphere for the moment
struct body {
    glm::vec3 pos;
    glm::vec3 vel;
    glm::vec3 acc;

    float mass;
    float radius;
};

#endif //PHXSPC_BODY_H
