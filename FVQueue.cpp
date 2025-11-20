#include "FVQueue.h"

FVQueue::FVQueue() {}
FVQueue::~FVQueue() {}
void FVQueue::enqueue(Vehicle* v) { q.enqueue(v); }
Vehicle* FVQueue::dequeue() { return q.dequeue(); }
bool FVQueue::isEmpty() { return q.isEmpty(); }
int FVQueue::size() { return q.size(); }
Vehicle* FVQueue::findByID(VID id) { return q.searchByID(id); }
bool FVQueue::removeByID(VID id) { return q.removeByID(id); }
void FVQueue::print() { q.print(); }
