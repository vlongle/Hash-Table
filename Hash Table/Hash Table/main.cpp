// Long Le
#include <iostream>
#include <iostream>
#include "doubleLinkedList.hpp"
#include "hashWithChaining.hpp"
#include "hashWithChaining.cpp" // this is very weird
// class template is so weird
// see https://www.codeproject.com/Articles/48575/How-to-define-a-template-class-in-a-h-file-and-imp

using namespace std;

// Doubly-linked list's Node

struct Data{
    string name;
    string value;
    
}
class DLNode{
    DLNode* right;
    DLNode* left;
    Data* data;
    
    void insert(DLNode* inNode){
        // this is a pointer to THIS CLASS
        inNode->right = this -> right;
        inNode -> left = this;
        (this -> right)-> left = inNode;
        this->right = inNode;  
    }
    // delete this Node
    void delete(){
         (this -> left)-> right = this-> right;
          (this -> right) -> left = this -> right;
        delete this;
    }
}

class hashTable{
    DLNode * firstTableIndex;
    int const sizeTable;
    
    
    void insert(){
        
        
    }
    
}



int main(){
    HashTable<3> h;
    h.printTable();
    h.insert(new Data{"vniet", 3});
    h.insert(new Data{"yes", 4});
    h.insert(new Data{"we", -1});
    h.insert(new Data{"can", 90});
    cout << endl;
    h.printTable();

    cout << "THE END" << endl;
}
