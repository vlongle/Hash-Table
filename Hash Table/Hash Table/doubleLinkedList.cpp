//
//  doubleLinkedList.cpp
//  Hash Table
//
//  Created by Le Nguyen VIet Long on 3/19/18.
//  Copyright © 2018 Le Nguyen Viet Long. All rights reserved.
//

#include "doubleLinkedList.hpp"
DLList::DLList(): head(nullptr){
}
DLList::DLList(DLNode* myHead){
    head = myHead;
}
// insert at the beginning
void DLList::insert(Data* data){
    size +=1;
    DLNode *dataNode = new DLNode{data, head, nullptr};
    if (head != nullptr){
    head->left = dataNode;
    }
    head = dataNode;

}
// return the pointer
DLNode* DLList::search(Data* data){
    DLNode* current = head;
    int index = 0;
    while (current->data != data){
        current = current -> right; // walk the chain
        index +=1;
    }
    if (index < size){ // valid index. Inside the linked list
        return current;
    }
    else{
        std::cout << "Can't Found the Node " << std::endl;
        return nullptr;
    }
}
void DLList::del(Data* data){
    DLNode* target = search(data);
    if (target == nullptr){
      std::cout << "Can't Found the Node " << std::endl;

    }
    else{
        DLNode* left = target-> left;
        DLNode* right = target-> right;
        left -> right = right;
        right -> left = left;
        delete target;
        size -=1;
    }
}
    void DLList::printList(){
        DLNode* current = head;
        for (int i =0; i < size; ++i){
            std::cout << "Node " << i << ": ";
            std::cout << current-> data << std::endl;
            current = current -> right;
        }
    }


