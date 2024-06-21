#pragma once

#include <sead/prim/seadSafeString.h>

class WalkerStateWanderParam {
    int _0, _4;
    float _8, _C, _10;
    sead::FixedSafeString<32> mWalkActionName;
    sead::FixedSafeString<32> mWaitActionName;

public:
    WalkerStateWanderParam(int a, int b, float c, float d, float e, const char* walkActionName, const char* waitActionName)
        : _0(a)
        , _4(b)
        , _8(c)
        , _C(d)
        , _10(e)
        , mWalkActionName(walkActionName)
        , mWaitActionName(waitActionName)
    {
    }
};
