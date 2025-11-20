#include "EventQueue.h"
#include <iostream>

EventQueue::EventQueue() { head = nullptr; cnt = 0; }
EventQueue::~EventQueue() {
    while(!isEmpty()) {
        Event* e = removeFront();
        delete e;
    }
}
void EventQueue::insertSorted(Event* e) {
    e->next = nullptr;
    if(head==nullptr) {
        head = e;
    } else if(e->time < head->time) {
        e->next = head;
        head = e;
    } else {
        Event* cur = head;
        while(cur->next && cur->next->time <= e->time) cur = cur->next;
        e->next = cur->next;
        cur->next = e;
    }
    cnt++;
}
Event* EventQueue::removeFront() {
    if(head==nullptr) return nullptr;
    Event* t = head;
    head = head->next;
    t->next = nullptr;
    cnt--;
    return t;
}
Event* EventQueue::peek() { return head; }
bool EventQueue::isEmpty() { return head==nullptr; }
int EventQueue::size() { return cnt; }
Event* EventQueue::searchByVID(int vid) {
    Event* p = head;
    while(p) {
        if(p->vid==vid) return p;
        p = p->next;
    }
    return nullptr;
}
bool EventQueue::removeByVID(int vid) {
    if(!head) return false;
    if(head->vid==vid) {
        Event* t = head;
        head = head->next;
        delete t;
        cnt--;
        return true;
    }
    Event* prev = head;
    Event* cur = head->next;
    while(cur) {
        if(cur->vid==vid) {
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
void EventQueue::print() {
    Event* p = head;
    while(p) {
        std::cout << "[" << p->time << "," << p->code << "," << p->vid << "]";
        p = p->next;
        if(p) std::cout << " ";
    }
    std::cout << std::endl;
}
