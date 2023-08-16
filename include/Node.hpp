#ifndef NODE_HPP
#define NODE_HPP

class Node
{
    public:
    Node* next;
    int data;
    Node::Node(int data=0){
        this->next = nullptr;
        this->data = data;
    }
}

#endif