#pragma once
#include "PageDef.h"

class IPage
{
public:
    virtual void GetId() const = 0;
    virtual void Show() const = 0;
    virtual void ProcessCommand() = 0;
};

