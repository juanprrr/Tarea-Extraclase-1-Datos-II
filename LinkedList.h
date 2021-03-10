//
// Created by juanpr on 5/3/21.
//

#ifndef TAREA_EXTRACLASE_1_DATOS_II_LINKEDLIST_H
#define TAREA_EXTRACLASE_1_DATOS_II_LINKEDLIST_H
#include "Node.h"

class LinkedList {
private:
    Node * head;

public:
    LinkedList(){
        head = NULL;
    }
    bool isEmpty();
    void push(int _data);
    Node* deleteData(int _data);
    void printList();
    Node* getHead(){
        return head;
    }


};


#endif //TAREA_EXTRACLASE_1_DATOS_II_LINKEDLIST_H
