#include "PriorityQueue.h"
#include <iostream>

PriorityQueue::PriorityQueue() { head=nullptr; cnt=0; }
PriorityQueue::~PriorityQueue() {
    while(!isEmpty()) {
        Vehicle* v = removeFront();
        delete v;
    }
}
void PriorityQueue::insertSorted(Vehicle* v) {
    v->next = nullptr;
    if(head==nullptr) {
        head = v;
    } else if(v->priority > head->priority) {
        v->next = head;
        head = v;
    } else {
        Vehicle* cur = head;
        while(cur->next && cur->next->priority >= v->priority) cur = cur->next;
        v->next = cur->next;
        cur->next = v;
    }
    cnt++;
}
Vehicle* PriorityQueue::removeFront() {
    if(head==nullptr) return nullptr;
    Vehicle* t = head;
    head = head->next;
    t->next = nullptr;
    cnt--;
    return t;
}
Vehicle* PriorityQueue::peek() { return head; }
bool PriorityQueue::isEmpty() { return head==nullptr; }
int PriorityQueue::size() { return cnt; }
Vehicle* PriorityQueue::searchByID(VID id) {
    Vehicle* p = head;
    while(p) {
        if(p->id==id) return p;
        p = p->next;
    }
    return nullptr;
}
bool PriorityQueue::removeByID(VID id) {
    if(!head) return false;
    if(head->id==id) {
        Vehicle* t = head;
        head = head->next;
        delete t;
        cnt--;
        return true;
    }
    Vehicle* prev = head;
    Vehicle* cur = head->next;
    while(cur) {
        if(cur->id==id) {
            prev->next = cur->next;
            delete cur;
            cnt--;
            return true;
        }
        prev = cur;
        cur = cur->next;
    }
    return false;
}
void PriorityQueue::print() {
    Vehicle* p = head;
    while(p) {
        std::cout << p->id;
        p = p->next;
        if(p) std::cout << " ";
    }
    std::cout << std::endl;
}
