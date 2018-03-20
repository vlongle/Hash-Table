// Long Le
#include <iostream>
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
    
    cout << "Y" << endl;
}
