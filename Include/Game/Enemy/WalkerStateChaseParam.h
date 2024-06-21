#pragma once

#include "types.h"
#include <sead/prim/seadSafeString.h>

class WalkerStateChaseParam {
    float _0;
    float _4;
    float _8;
    float _C;
    float _10;
    bool _14;
    bool _15;
    sead::FixedSafeString<32> mRunActionName;
    sead::FixedSafeString<32> mWaitActionName;

public:
    WalkerStateChaseParam(bool a, bool b, float c, float d, float e, float f, float g, const char* runActionName, const char* waitActionName)
        : _14(a)
        , _15(b)
        , _0(c)
        , _4(d)
        , _8(e)
        , _C(f)
        , _10(g)
        , mRunActionName(runActionName)
        , mWaitActionName(waitActionName)
    {
    }
};
