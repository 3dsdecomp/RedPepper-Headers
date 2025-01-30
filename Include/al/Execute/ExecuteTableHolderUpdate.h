#pragma once

#include "ExecutorListBase.h"
#include "al/Execute/ExecuteOrder.h"
#include "al/Functor/FunctorBase.h"

namespace al {

class IUseExecutor;

class ExecuteTableHolderUpdate {
#ifndef __CC_ARM
public:
#endif
    int mNumExecutorLists;
    ExecutorListBase** mExecutorLists;
    int _8;
    int _C;
    int _10;
    int _14;
    int _18;
    int _1C;
    int _20;
    int _24;
    int _28;
    int _2C;
    int _30;
    int _34;
    int _38;
    int _3C;
    int _40;

public:
    ExecuteTableHolderUpdate();

    void init(const ExecuteOrder* order, int);
    void createExecutorListTable();
    void tryRegisterUser(al::IUseExecutor* p, const char* name);
    void tryRegisterFunctor(const al::FunctorBase& base, const char* name);

    friend class ExecuteDirector;
};

} // namespace al
