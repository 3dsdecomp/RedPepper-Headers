#pragma once

#include "types.h"

namespace al {

constexpr u32 calcHashCode(const char* str)
{
    u32 result = 0;
    char curChar = *str;

    while ((curChar = *str)) {
        result = result * 31 + curChar;
        str++;
    }

    return result;
}

} // namespace al
