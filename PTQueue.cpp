#include "PTQueue.h"

PTQueue::PTQueue() {}
PTQueue::~PTQueue() {}
void PTQueue::enqueue(Vehicle* v) { q.enqueue(v); }
Vehicle* PTQueue::dequeue() { return q.dequeue(); }
bool PTQueue::isEmpty() { return q.isEmpty(); }
int PTQueue::size() { return q.size(); }
Vehicle* PTQueue::findByID(VID id) { return q.searchByID(id); }
bool PTQueue::removeByID(VID id) { return q.removeByID(id); }
void PTQueue::print() { q.print(); }
