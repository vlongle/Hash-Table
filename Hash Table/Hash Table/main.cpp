// Long Le
#include <iostream>
#include <iostream>
#include <fstream>
#include "doubleLinkedList.hpp"
#include "hashWithChaining.hpp"
#include "hashWithChaining.cpp" // this is very weird
// class template is so weird
// see https://www.codeproject.com/Articles/48575/How-to-define-a-template-class-in-a-h-file-and-imp

using namespace std;


//  test with the collegeAcc.txt
// 0-- unknown, -1 rejected, 1 accepted
int main(){
    HashTable<3> h;
    cout << "Before data " << endl;
    h.printTable();
    ifstream file("/Users/longle/Desktop/Developers/github/Hash-Table/Hash Table/Hash Table/collegeAcc.txt");
    while (!file.eof()) {
        string key;
        string value;
        int intVal;
        getline(file, key, ',');
        getline(file, value);
        intVal = stoi(value); // stoi --- s (string) to i (int). Convert string to int
        cout << key << ": " << intVal << endl;
        h.insert(new Data{key, intVal});
    }
    cout << "END OF FILE" << endl;
    
    cout << "After data " << endl;
    h.printTable();

    cout << "THE END OF PROGRAM " << endl;
}
