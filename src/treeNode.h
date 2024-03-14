#ifndef _TREENODE_H
#define _TREENODE_H

#include<vector>
#include<string>

class treeNode{
    public: 
        treeNode();
        treeNode(std::string name);
        void createNode(std::string name);
        void getNode(std::string name);
        void listDirectory();
    private:
        std::vector<treeNode*> theNodes;
        std::vector<std::string> fileName;
};

#endif