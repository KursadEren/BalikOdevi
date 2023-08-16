#include "Reading.hpp"

 Reading::Reading(string filename)
 {
    this->filename = filename;
    this->lines = new BST*[linecount()];
    for (int i = 0; i < linecount(); i++) {
       
        this->lines[i] = new BST(linecount());
       
    }
 }
 Reading::~Reading(){

 }


 void Reading::readline(){
    string token;
    ifstream file(this->filename);
    string str;
    int s = 0;
   
    while (getline(file, token)) {
        istringstream ss(token);
        while (getline(ss, str, ' ')) {
        this->lines[i] = append(stoi(str));
         s++;
        }        
    }   
    file.close();
 }

  int Reading :: linecount() {
    int counter = 0;
    ifstream file(this->filename);
    string unused;
    while (getline(file, unused))
        ++counter;

    file.close();
    return counter;
}

Node* Reading::append(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}