#pragma once
#include "IPage.h"

class MainPage : public IPage
{
public:
    void GetId() const override;
    void Show() const override;
    void ProcessCommand() override;

private:
    
};