#pragma once

#include "al/Effect/EffectSystem.h"

namespace alEffectFunction {

al::EffectUserInfo* tryFindEffectUser(al::EffectSystemInfo* info, const char* userName);

} // namespace alEffectFunction
