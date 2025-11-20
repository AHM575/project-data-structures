#include "EVQueue.h"

EVQueue::EVQueue() {}
EVQueue::~EVQueue() {}
void EVQueue::push(Vehicle* v) {
    pq.insertSorted(v);
}
Vehicle* EVQueue::pop() { return pq.removeFront(); }
Vehicle* EVQueue::top() { return pq.peek(); }
bool EVQueue::empty() { return pq.isEmpty(); }
int EVQueue::size() { return pq.size(); }
Vehicle* EVQueue::find(VID id) { return pq.searchByID(id); }
bool EVQueue::removeByID(VID id) { return pq.removeByID(id); }
void EVQueue::print() { pq.print(); }
