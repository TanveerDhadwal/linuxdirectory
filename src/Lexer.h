#ifndef _LEXER_H
#define _LEXER_H

#include<string>

class Lexer{
    public:
        Lexer();
        Lexer(std::string _exp_);
        std::string find(std::string key);
        void parse(std::string exp_);
    private:
        std::string data_;


};

#endif