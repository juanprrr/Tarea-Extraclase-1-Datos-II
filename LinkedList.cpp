//
// Created by juanpr on 5/3/21.
//
#include <iostream>
#include "LinkedList.h"

void LinkedList::addFront(int _data) {
    if (head == NULL)
        head = new Node(_data);
    else {
        Node * tmp = new Node(_data);
        tmp->next = head;
        head = tmp;
    }
}
bool LinkedList::isEmpty() {
    return head == NULL;
}
void LinkedList::printList() {
    if (!isEmpty()){
        Node * tmp = head;
        while (tmp != NULL){
            std::cout << tmp->data << " ";
            tmp = tmp->next;
        }
        std::cout << std::endl;
    }
    else
        std::cout <<"Empty list"<< std::endl;
}
