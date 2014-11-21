#include "GameManager.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "ConsoleHelper.h"

using namespace std;
using namespace FTetris;

GameManager::GameManager()
{
    _menuOp.push_back("Jugar");
    _menuOp.push_back("Altos puntajes");

}

GameManager::~GameManager()
{
    //dtor
}

int GameManager::MainMenu(){
    string op;
    int iop;
    do{
        ConsoleHelper::clearscr();
        for(int i=0; i < _menuOp.size(); ++i ){
            cout<<"["<<(i+1)<<"] "<<_menuOp[i]<<endl;
        }
        cout<<endl<<"[0] Salir"<<endl;
        cout<<endl<<endl<<"Opcion: ";
        cin>>op;
        op.erase(op.find_last_not_of(" \n\r\t")+1);
        try{
            iop = atoi(op.c_str());
        }
        catch(const invalid_argument& ia){
            iop=-1;
            cerr<<"Opcion no valida"<<endl;
        }

    }while(iop<0 ||iop>_menuOp.size());
    return iop;
}

void GameManager::Close(){
    cout<<"Gracias por Jugar!!"<<endl;
    system("pause");
}

void GameManager::Start(){
    int op;
    do{
        op=MainMenu();

    }while(op != 0);
    Close();
}
