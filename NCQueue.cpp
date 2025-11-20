#include "NCQueue.h"

NCQueue::NCQueue() {}
NCQueue::~NCQueue() {}
void NCQueue::enqueue(Vehicle* v) { q.enqueue(v); }
Vehicle* NCQueue::dequeue() { return q.dequeue(); }
bool NCQueue::isEmpty() { return q.isEmpty(); }
int NCQueue::size() { return q.size(); }
Vehicle* NCQueue::findByID(VID id) { return q.searchByID(id); }
bool NCQueue::removeByID(VID id) { return q.removeByID(id); }
void NCQueue::print() { q.print(); }
