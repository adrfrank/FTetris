#include "ConsoleHelper.h"
#include <cstdlib>

using namespace std;


void ConsoleHelper::pause(){
    system("pause");
}

string  ConsoleHelper::actualOS(){
    return WIN;
}

void ConsoleHelper::clearscr(){
    string OS = actualOS();
    if(OS == WIN){
        system("cls");
    }else if(OS == LINUX){
        system("clear");
    }
}
