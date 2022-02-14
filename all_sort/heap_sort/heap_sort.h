#ifndef HEAP_SORT
#define HEAP_SORT

#include <vector>
#include <prepare.h>

class HeapSort
{
public:
     HeapSort();
     void initHeap(std::vector<data>& v);
     void printHeap(std::vector<data>& v);
     void swapElement(std::vector<data> &v, int i, int j);
};


#endif
