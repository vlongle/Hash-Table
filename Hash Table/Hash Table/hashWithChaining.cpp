//
//  hashWithChaining.cpp
//  Hash Table
//
//  Created by Le Nguyen VIet Long on 3/22/18.
//  Copyright © 2018 Le Nguyen Viet Long. All rights reserved.
//

#include "hashWithChaining.hpp"
template <int numSlot>
int HashTable<numSlot>::hashFunction (std::string str){
    char chArr[str.size()];
    strcpy(chArr, str.c_str()); // strcpy: string copy --> copy one char array to another char array.
    // str.c_str return the C-style char array of string
    int sum = 0;
    for (int i=0; i < str.size(); ++i){
        int j = chArr[i]; // in C++ char is represented internally as int
        sum +=j;
    }
    std::cout << "HashTable<numSlot>::hashFunction, the hash value (without modulo) is " << sum << std::endl;
    return sum % numSlot;
}



template <int numSlot>
void HashTable<numSlot>::insert(Data* data){
    int slotNum = hashFunction(data->key);
    table[slotNum].insert(data);
}


template <int numSlot>
DLNode* HashTable<numSlot>::search(Data* data){
    int slotNum = hashFunction(data->key);
    return table[slotNum].search(data);
}



template <int numSlot>
void HashTable<numSlot>::del(Data* data){ // delete
    int slotNum = hashFunction(data->key);
    table[slotNum].del(data);
}


template <int numSlot>
void HashTable<numSlot>::printTable(){
    std::cout << "HashTable<numSlot>::printTable(), printing slot in the table ... " <<std::endl;
    for (int i=0; i < numSlot; i++){
        std::cout << "-----Slot " << i << ": " << std::endl;
        table[i].printList();
        std::cout << "---------" << std::endl;
    }
}





