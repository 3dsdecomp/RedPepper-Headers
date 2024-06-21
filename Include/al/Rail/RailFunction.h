#pragma once

#include "al/LiveActor/LiveActor.h"

namespace al {

const sead::Vector3f& getRailDir(const LiveActor* actor);
const sead::Vector3f& getRailPos(const LiveActor* actor);

void setSyncRailToStart(LiveActor* actor);
void moveSyncRail(LiveActor* actor, float speed);
void moveSyncRailTurn(LiveActor* actor, float speed);
void moveSyncRailLoop(LiveActor* actor, float speed);

bool isExistRail(const LiveActor* actor);
bool isLoopRail(const LiveActor* actor);
bool isRailReachedStart(const LiveActor* actor);
bool isRailReachedGoal(const LiveActor* actor);
bool isRailReachedEnd(const LiveActor* actor);

RailRider* getRailRider(const LiveActor* actor);

} // namespace al
