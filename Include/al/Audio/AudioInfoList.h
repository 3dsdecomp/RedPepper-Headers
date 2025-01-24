#pragma once

#include <sead/prim/seadSafeString.h>

namespace al {

template <typename T>
class AudioInfoList {
public:
    T* tryFindInfo(const sead::SafeString& userName);
};

} // namespace al
