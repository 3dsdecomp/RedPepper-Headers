#pragma once

#include "nn/gr/gr_FrameBuffer.h"
#include "sead/gfx/seadColor.h"
#include "sead/gfx/seadFrameBuffer.h"
#include <sead/framework/seadFramework.h>
#include <sead/heap/seadHeap.h>
#include <sead/prim/seadRuntimeTypeInfo.h>
#include <sead/prim/seadSafeString.h>

namespace al {

class GameFrameworkCtrNw4c : public sead::Framework {
    SEAD_RTTI_OVERRIDE(GameFrameworkCtrNw4c, Framework);

public:
    u8 _28[0x38];
    sead::Color4f mClearColor;
    u8 _70[0x1c];
    int mVsyncCountLastFrame;
    nn::gr::FrameBuffer mFrameBuffer;
    sead::FrameBuffer* mTopFrameBuffer;
    sead::FrameBuffer* mBtmFrameBuffer;

    GameFrameworkCtrNw4c();
    ~GameFrameworkCtrNw4c() override;

    void createSystemTasks(sead::TaskBase* base,
        const Framework::CreateSystemTaskArg& createSystemTaskArg) override;
    void quitRun_(sead::Heap* heap) override;

    virtual void createControllerMgr(sead::TaskBase* base);
    virtual void unk1();
    virtual void unk2();
    virtual void unk3();
    virtual void unk4();
    virtual void unk5();
    virtual void unk6();
    virtual void unk7();
    virtual void unk8();
    virtual void waitStartDisplayLoop_();
    virtual void mainLoop_();
    virtual void procFrame_();
    virtual void procDraw_();
    virtual void procCalc_();
    virtual void presentLeft_();
    virtual void presentRight_();
    virtual void unk9();
    virtual void presentBtm_();
    virtual void swapBuffer_();
    virtual void waitForVBLank_();
    virtual void clearFrameBuffers_();
};

} // namespace al
