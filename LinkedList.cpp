//
// Created by juanpr on 5/3/21.
//
#include <iostream>
#include "LinkedList.h"

void LinkedList::push(int _data) {
    if (head == NULL)
        head = collector->giveSpace(_data);

    else {
        Node * tmp = collector->giveSpace(_data);
        tmp->next = head;
        head = tmp;
        cout<<"------Push an integer-------"<<endl;
        cout<< "New Data: "<< head->data<<endl;
        cout << "Address collected: "<< &(head->data)<<endl;

    }
}

bool LinkedList::isEmpty() {
    return head == NULL;
}
Node* LinkedList::deleteData(int _data) {
    cout << "To delete: "<< endl;
    cout << _data << endl;
    
    if(!isEmpty()){
        if(_data == head->data){
            Node * tmp = head;
            head = head->next;
            tmp->next = NULL;
            collector->collectSpace(tmp);
            return nullptr;
        }
        else{
            Node * prev = this->head;
            Node * curr = this->head;
            while (curr != NULL){
                if(curr->getData() == _data){
                    prev->next = curr->next;
                    curr->next = NULL;
                    collector->collectSpace(curr);
                    return nullptr;
                }
                prev = curr;
                curr = curr->next;
            }
        }
    }
    return NULL;

}
void LinkedList::printList() {
    cout<<"----Collector list----"<<endl;
    collector->printCollector();

    if (!isEmpty()){
        Node * tmp = head;
        cout <<"----Current list----- "<<endl;
        while (tmp != NULL){
            std::cout << tmp->data << " ";
            tmp = tmp->next;
        }
        std::cout << std::endl;
    }
    else
        std::cout <<"Empty list"<< std::endl;
}
