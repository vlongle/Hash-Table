//
//  hashWithChaining.hpp
//  Hash Table
//
//  Created by Le Nguyen VIet Long on 3/22/18.
//  Copyright © 2018 Le Nguyen Viet Long. All rights reserved.
//

#ifndef hashWithChaining_hpp
#define hashWithChaining_hpp

#include <stdio.h>
#include "doubleLinkedList.hpp"
#include <string>
// Hashing with chaining
template <int numSlot>
class HashTable{
public:
    DLList table[numSlot]; // table is an array whose each element is a doubly-linked list
    int hashFunction (std::string str);
    void insert(Data* data);
    DLNode* search(Data* data);
    void del(Data* data);
    void printTable();
};
#endif /* hashWithChaining_hpp */

