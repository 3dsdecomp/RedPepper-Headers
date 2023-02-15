#pragma once

#include "al/MapObj/MapObjActor.h"

class BombHei : public al::MapObjActor {
    u8 _60[0x20];
    float _80;
    bool _84;
    void* _88;

public:
    BombHei(const sead::SafeString& name);

    virtual void init(const al::ActorInitInfo& info);
    virtual void makeActorAppeared();
    virtual void attackSensor(al::HitSensor* me, al::HitSensor* other);
    virtual bool receiveMsg(u32 msg, al::HitSensor* other, al::HitSensor* me);
};
