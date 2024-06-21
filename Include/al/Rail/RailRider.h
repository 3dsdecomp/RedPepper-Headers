#pragma once

#include "al/Rail/Rail.h"

namespace al {

class RailRider {
    Rail* mRail;
    sead::Vector3f mCurrentPos;
    sead::Vector3f mCurrentDir;
    float mCoord;
    float mSpeed;
    bool mIsLoop;

public:
    RailRider(Rail* rail);

    void moveToRailStart();
    void moveToNearestRail(const sead::Vector3f& trans);

    bool isReachedGoal() const;
    bool isReachedRailStart() const;
    bool isReachedRailEnd() const;

    void setSpeed(float speed) { mSpeed = speed; }
    void setCoord(float coord) { mCoord = coord; }

    const sead::Vector3f& getCurrentPos() const { return mCurrentPos; }
    const sead::Vector3f& getCurrentDir() const { return mCurrentDir; }
    float getCoord() const { return mCoord; }
    bool isLoop() const { return mIsLoop; }
};

} // namespace al
