#pragma once

namespace al {

class ExecutorListBase {
    const char* mName;

public:
    ExecutorListBase(const char* name);

    virtual ~ExecutorListBase();
    virtual void executeList() = 0;
    virtual bool isActive() const = 0;
    virtual void v4();
    virtual void v5();
};

} // namespace al
