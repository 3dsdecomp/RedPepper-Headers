#pragma once

#include "al/Audio/AudioInfoList.h"
#include "al/Audio/SeUserInfo.h"
#include "hk/Types.h"

namespace al {

class AudioKeeper {
    u8 _0[0x14];
    AudioInfoList<SeUserInfo>* mSeUserList;
    u8 _18[0x14];
    struct {

    }* _2C;

public:
    void update();
};

class IUseAudioKeeper {
    virtual void v1();
    virtual void v2();

public:
    virtual AudioKeeper* getAudioKeeper() const = 0;
};

} // namespace al
