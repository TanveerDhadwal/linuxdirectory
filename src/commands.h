#ifndef _COMMANDS_H
#define _COMMANDS_H

#include<string>
#include<vector>

class Commands{
    public:
        Commands();
        void List();
        void mDirectory(std::string name);
        void rDirectory(std::string name);
        void select(std::string name);
        void openWord(std::string name);
        void openCode(std::string name);
};

#endif