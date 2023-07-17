#include <string>
#include <Windows.h>

#include "MainFrame.h"

std::string GetCommand();
std::vector<std::string> ParseCommand(const std::string& command);

int main()
{
    MainFrame mainFrame;

    while (true)
    {
        std::string command{ std::move(GetCommand()) };
        std::vector<std::string> commandSplit{ ParseCommand(command) };
        
        mainFrame.Process(commandSplit);
        Sleep(1000);
    }

    return 0;
}

std::string GetCommand()
{
    std::string command;

    return std::move(command);
}

std::vector<std::string> ParseCommand(const std::string& command)
{
    std::vector<std::string> commandSplit;

    return commandSplit;
}