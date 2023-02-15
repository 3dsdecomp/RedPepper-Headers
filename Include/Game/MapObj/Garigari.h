#pragma once

#include "al/MapObj/MapObjActor.h"

class Garigari : public al::MapObjActor {
    float _60;
    int mSpeed;
    int _68;
    int _6C;
    int _70;
    int _74;

public:
    Garigari(const sead::SafeString& name);

    virtual void init(const al::ActorInitInfo& info);
    virtual void attackSensor(al::HitSensor* me, al::HitSensor* other);
    virtual bool receiveMsg(u32 msg, al::HitSensor* other, al::HitSensor* me);
    virtual void control();
};
