#ifndef CONSOLEHELPER_H
#define CONSOLEHELPER_H
#include <string>

using namespace std;

namespace ConsoleHelper
{
    const string    WIN="Win";
    const string    LINUX="Lnx";
    string actualOS();
    void pause();
    void gotoxy();
    void clearscr();
}

#endif // CONSOLEHELPER_H
