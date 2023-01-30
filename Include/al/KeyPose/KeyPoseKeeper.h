#pragma once

#include "al/KeyPose/KeyPose.h"
#include "al/LiveActor/ActorInitInfo.h"

namespace al {

class KeyPoseKeeper {
    enum MoveType {
        MoveType_Loop,
        MoveType_Turn,
        MoveType_Stop,
        MoveType_Restart
    };

    KeyPose* mKeyPoses;
    int mKeyPoseAmount;
    int mCurrentKeyPoseIdx;
    MoveType mMoveType;
    bool _10;
    bool _11;

public:
    KeyPoseKeeper();

    void init(const ActorInitInfo& info);

    const KeyPose* getNextKeyPose() const;
};

const sead::Vector3f& getCurrentKeyTrans(const KeyPoseKeeper* p);
const sead::Vector3f& getNextKeyTrans(const KeyPoseKeeper* p);
const PlacementInfo* getNextKeyPlacementInfo(const KeyPoseKeeper* p);

} // namespace al
