#ifndef ALGORITHM_SORT__
#define ALGORITHM_SORT__
#include <vector>
#include <iostream>


namespace algorithm_sort {
    class Sort;
}



class algorithm_sort::Sort
{
public:
    Sort();
    void setArray(std::vector<int>* a_array);
    /****   compare   ****/
    //exchange mode
    void bubbleSort();                      //done

    void quickSort();                       //done

    void quickSubSort(int a_i, int a_j);    //done

    //insert mode
    void insertSort();                      //done
    void shellSort(unsigned int step);      //to do

    //select mode
    void selectSort();                      //done

    void heapSortArray();                   //done
    void heapAdjust(int a_index);

    void heapSort_list();                   //to do

    //merge mode
    void binMerge();                        //to do

    /****   non-compare   ****/
//    void collect();

private:
    bool isNoNeeded();
    std::vector<int>* m_p_array;
};




template<class T>
void swap(T& a, T&b)
{
    T temp = a;
    a = b;
    b = temp;
}
#endif
