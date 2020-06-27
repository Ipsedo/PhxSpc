//
// Created by samuel on 27/06/2020.
//

#ifndef PHXSPC_ENGINE_H
#define PHXSPC_ENGINE_H

#include "body.h"

#include <vector>

struct engine {
    std::vector<body> bodies;

    float dt;
};

body update_body(body to_update, std::vector<body> others, float dt);

#endif //PHXSPC_ENGINE_H
