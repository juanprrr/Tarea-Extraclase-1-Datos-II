//
// Created by juanpr on 5/3/21.
//

#ifndef EXTRA_CLASE_I_LINKEDLIST_H
#define EXTRA_CLASE_I_LINKEDLIST_H


#include "Node.h"

class LinkedList {
private:
    Node * head;

public:
    LinkedList(){
        head = NULL;
    }
    bool isEmpty();
    void addFront(int _data);
    Node* deleteData(int _data);
    void printList();


};


#endif //EXTRA_CLASE_I_LINKEDLIST_H
