#pragma once

#include "nw/lyt/Drawer.h"
namespace al {

class LayoutSystem {
    void* _0;
    class GraphicsResource* _4;
    void* _8;
    nw::lyt::Drawer* mLytDrawer = nullptr;

public:
    nw::lyt::Drawer* getLayoutDrawer() const { return mLytDrawer; }
};

} // namespace al
