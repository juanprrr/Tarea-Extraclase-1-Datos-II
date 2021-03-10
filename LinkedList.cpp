//
// Created by juanpr on 5/3/21.
//
#include <iostream>
#include "LinkedList.h"

void LinkedList::push(int _data) {
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
Node* LinkedList::deleteData(int _data) {
    cout << "Current head: "<< endl;
    cout << head->getData() << endl;
    cout << &head<< endl;
    if(!isEmpty()){
        if(_data == head->data){
            Node * tmp = head;
            head = head->next;
            tmp->next = NULL;
            return tmp;
        }
        else{
            Node * prev = this->head;
            Node * curr = this->head;
            while (curr != NULL){
                if(curr->getData() == _data){
                    prev->next = curr->next;
                    curr->next = NULL;
                    return curr;
                }
                prev = curr;
                curr = curr->next;
            }
        }
    }
    return NULL;

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
