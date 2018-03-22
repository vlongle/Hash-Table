//
//  doubleLinkedList.hpp
//  Hash Table
//
//  Created by Le Nguyen VIet Long on 3/19/18.
//  Copyright © 2018 Le Nguyen Viet Long. All rights reserved.
//

#ifndef doubleLinkedList_hpp
#define doubleLinkedList_hpp
#include <iostream>
#include <stdio.h>
#include <string>
struct Data{
    std::string key;
    int value;
};

struct DLNode{
    Data* data;
    DLNode* right;
    DLNode* left;
};

// Doubly-linked list
class DLList{
public:
    int size=0;
    DLNode* head;
    
    // Methods
    DLList();
    DLList(DLNode* myHead);
    void insert(Data* data);
    DLNode* search(Data* data);
    void del(Data* data); // delete
    void printList();
    
};
#endif /* doubleLinkedList_hpp */
