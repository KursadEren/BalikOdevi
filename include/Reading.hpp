#ifndef READING_HPP
#define READING_HPP

#include <iostream>
using namespace std;

#include "BST.hpp"
#include "Node.hpp"
class  Reading {
   private:
     string filename;
     BST**lines
     Node * head
   public:


    Reading();
    ~Reading();
    void readline();
    int linecount();
    Node* append(int value);
};


#endif