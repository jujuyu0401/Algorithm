#ifndef ALGORITHM_SORT__
#define ALGORITHM_SORT__
#include <vector>


namespace algorithm_sort {
    class Sort;
}



class algorithm_sort::Sort
{
public:
    Sort();
    void setArray(std::vector<int>* array);
    /****   compare   ****/
    //exchange mode
    void bubbleSort();                  //done
    void quickSort();                   //done
    void quickSubSort(int i, int j);    //done

    //insert mode
    void insertSort();                  //done
    void shellSort(unsigned int step);  //to do

    //select mode
    void selectSort();                  //to do
    void heapSort();                    //to do

    //merge mode
    void binMerge();                    //to do

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
