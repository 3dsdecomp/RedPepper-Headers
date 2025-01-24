#pragma once

#include <sead/math/seadVector.h>

class PlayerProperty {
#ifndef __CC_ARM
public:
#endif
    sead::Vector3f mTrans;
    sead::Vector3f mFront;
    sead::Vector3f mUp;
    sead::Vector3f mVelocity;
    u8 _30[0x48];

public:
    void setFrontVec(const sead::Vector3f& front);
    void setUpVec(const sead::Vector3f& up);
};
