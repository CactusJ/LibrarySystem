#pragma once
#include <string>
#include <map>
#include <memory>
#include <vector>

#include "../Page/IPage.h"
#include "../Data/Material.h"

class MainFrame
{
public:
    MainFrame();
    virtual ~MainFrame();
    
    void Process(const std::vector<std::string>& commandSplits);

private:
    std::map<PageId, std::unique_ptr<IPage>> pages_;
    IPage* currentPage_;
    
    std::map<MaterialId, std::unique_ptr<Material>> materials_;
};