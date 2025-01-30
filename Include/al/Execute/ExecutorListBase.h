#pragma once

namespace al {

class ExecutorListBase {
    const char* mName;

public:
    ExecutorListBase(const char* name);

    virtual ~ExecutorListBase();
    virtual void executeList() = 0;
    virtual bool isActive() const = 0;

    const char* getName() const { return mName; }
};

} // namespace al
