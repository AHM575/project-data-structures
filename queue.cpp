#include "Queue.h"
#include <iostream>

Queue::Queue() { head = nullptr; tail = nullptr; cnt = 0; }
Queue::~Queue() {
    while(!isEmpty()) {
        Vehicle* v = dequeue();
        delete v;
    }
}
void Queue::enqueue(Vehicle* v) {
    v->next = nullptr;
    if(tail==nullptr) {
        head = tail = v;
    } else {
        tail->next = v;
        tail = v;
    }
    cnt++;
}
Vehicle* Queue::dequeue() {
    if(head==nullptr) return nullptr;
    Vehicle* t = head;
    head = head->next;
    if(head==nullptr) tail=nullptr;
    t->next = nullptr;
    cnt--;
    return t;
}
bool Queue::isEmpty() { return head==nullptr; }
int Queue::size() { return cnt; }
void Queue::print() {
    Vehicle* p = head;
    while(p) {
        std::cout << p->id;
        p = p->next;
        if(p) std::cout << " ";
    }
    std::cout << std::endl;
}
Vehicle* Queue::searchByID(VID id) {
    Vehicle* p = head;
    while(p) {
        if(p->id==id) return p;
        p = p->next;
    }
    return nullptr;
}
bool Queue::removeByID(VID id) {
    if(!head) return false;
    if(head->id==id) {
        Vehicle* t = head;
        head = head->next;
        if(head==nullptr) tail=nullptr;
        delete t;
        cnt--;
        return true;
    }
    Vehicle* prev = head;
    Vehicle* cur = head->next;
    while(cur) {
        if(cur->id==id) {
            prev->next = cur->next;
            if(cur==tail) tail = prev;
            delete cur;
            cnt--;
            return true;
        }
        prev = cur;
        cur = cur->next;
    }
    return false;
}
