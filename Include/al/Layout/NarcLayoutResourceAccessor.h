#pragma once

#include "nw/lyt/ResourceAccessor.h"
namespace al {

class NarcLayoutResourceAccessor : public nw::lyt::ResourceAccessor {
public:
    void* GetResource(u32 type, const char* name, u32* outSize) override;
};

} // namespace al
