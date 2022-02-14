#include <iostream>
#include <vector>
#include <algorithm>

#include "heap_sort.h"

HeapSort::HeapSort()
{

}


void HeapSort::initHeap(std::vector<data> &v)
{
    int size = v.size();
    for(int i = size - 1; i > 0; --i){
        if(i % 2 == 0){
            if(( v[i] >= v[i - 1]) && (v[i] > v[i / 2 - 1])){
                swapElement(v, i / 2 - 1, i);
            }
            else if ((( v[i] < v[i - 1]) && (v[i - 1] > v[i / 2 - 1]))){
                swapElement(v, i / 2 - 1, i - 1);
            }
        }
        else if(v[i] > v[i / 2]){
            swapElement(v, i / 2, i);
        }
    }
}

void HeapSort::printHeap(std::vector<data> &v)
{
    while(v.size() > 0){
        std::cout << v[0] << "  ";
        std::swap(v[0], v[v.size() - 1]);
        v.pop_back();
        initHeap(v);
    }

}

void HeapSort::swapElement(std::vector<data>& v, int i, int j)
{
    if(i == j){
        return;
    }
    std::swap(v[i], v[j]);

    // recursion the son tree
    if(v.size() > (j * 2 + 2)){
        if((v[j * 2 + 2] >= v[j * 2 + 1]) && v[j * 2 + 2] < v[j]){
            swapElement(v, j, j * 2 + 1);
        }
        else if((v[j * 2 + 2] < v[j * 2 + 1]) && v[j * 2] > v[j]){
            swapElement(v, j, j * 2 + 2);
        }
    }
    else if( v.size() > j * 2 + 1){
        if(v[j * 2 + 1] < v[j]){
            swapElement(v, j, j * 2 + 1);
        }
    }
}

