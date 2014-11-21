#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include <string>
#include <vector>

using namespace std;

namespace FTetris{
    class GameManager
    {
        public:
            GameManager();
            virtual ~GameManager();
            int MainMenu();
            void Start();
        protected:
            vector<string> _menuOp ;
            void Close();
        private:


    };
}



#endif // GAMEMANAGER_H
