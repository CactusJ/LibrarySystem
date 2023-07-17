#include "MainFrame.h"
#include "../Page/IPage.h"
#include "../Page/MainPage.h"

MainFrame::MainFrame()
{
    pages_.insert({ MAIN_PAGE_ID, std::make_unique<MainPage>() });
    currentPage_ = pages_[MAIN_PAGE_ID].get();
}

MainFrame::~MainFrame()
{
    currentPage_ = nullptr;
}

void MainFrame::Process(const std::vector<std::string>& commandSplits)
{
    currentPage_->Show();
}