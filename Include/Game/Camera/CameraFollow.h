#pragma once

#include "al/Camera/Camera.h"

class CameraFollow : public al::Camera {
    void* _4C;
    float _50;
    float _54;
    float _58;
    float _5C;
    float _60;
    float _64;
    float _68;
    float _6C;
    float _70;
    float _74;
    float _78;

public:
    CameraFollow(const char* name);

    virtual void load(const al::ByamlIter* ticket);
    virtual void calc();
};
