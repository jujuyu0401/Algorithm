#include "sort.h"
#include <iostream>
#include "test.h"

namespace algorithm_sort {
    Sort::Sort()
    {
    }

    void Sort::setArray(std::vector<int>* array)
    {
        m_p_array = array;

    }

    bool Sort::isNoNeeded()
    {
        if(1 >= m_p_array->size()){
            return true;
        }
        return false;

    }


    void Sort::quickSort()
    {
        if(isNoNeeded()){
            return ;
        }

        quickSubSort(0, (*m_p_array).size() - 1);
    }
    void Sort::quickSubSort(int i, int j)
    {
        if(i == j){
            return ;
        }
        if(i + 1 == j){
            if((*m_p_array)[i] > (*m_p_array)[j]){
                std::swap((*m_p_array)[i], (*m_p_array)[j]);
            }
        }
        int i_origin = i;
        int j_origin = j;
        int sentry = (*m_p_array)[i];
        bool direct_flag = false;
        while( i != j){
            if(!direct_flag){
                if( (*m_p_array)[j] < sentry ){
                    (*m_p_array)[i] = (*m_p_array)[j];
                    direct_flag = true;
                    continue;
                }
                --j;
            }
            if(direct_flag){
                if((*m_p_array)[i] >= sentry){
                    (*m_p_array)[j] = (*m_p_array)[i];
                    direct_flag = false;
                    continue;
                }
                ++i;
            }
        }
        (*m_p_array)[i] = sentry;
        if(i > i_origin){
            quickSubSort(i_origin, i - 1);
        }
        if(i < j_origin){
            quickSubSort(i + 1, j_origin);
        }

    }

    void Sort::bubbleSort()
    {
        if(isNoNeeded()){
            return ;
        }
        for(int i = 0; i < m_p_array->size(); ++i){
            bool exchange_flag = false;
            for(int j = 0; j < m_p_array->size() - i - 1; ++j){
                if((*m_p_array)[j] > (*m_p_array)[j + 1]){
                    std::swap((*m_p_array)[j], (*m_p_array)[j + 1]);
                    exchange_flag = true;
                }
            }
            if(!exchange_flag){
                break;
            }
        }
    }


    void Sort::insertSort()
    {
        if(isNoNeeded()){
            return ;
        }

        for(int i = 1; i < m_p_array->size(); ++i){
            int sentry = (*m_p_array)[i];
            for(int j = 0; j < i; ++j){
                if((*m_p_array)[j] > sentry){
                    for(int k = i; k > j; --k){
                        (*m_p_array)[k] = (*m_p_array)[k - 1];
                    }
                    (*m_p_array)[j] = sentry;
                    break;
                }
            }
        }
    }


    void Sort::shellSort(unsigned int step)
    {
        if(isNoNeeded()){
            return ;
        }
        if(1 == step){
            insertSort();
            return;
        }
        if(step >= (*m_p_array).size()){
            insertSort();
            return;
        }
        for(int i = 0; i < step; ++i){
            for(int j = i; j < (*m_p_array).size(); j += step){
                for(int k = j; k < (*m_p_array).size(); k += step){

                }


                abort();
                // to code
            }

        }

    }

    void Sort::selectSort()
    {
        if(isNoNeeded()){
            return ;
        }
        for(int i = 0; i < (*m_p_array).size(); ++i){
            int sentry = (*m_p_array)[i];
            int sentry_index = i;
            for(int j = i + 1; j < (*m_p_array).size(); ++j){
                if((*m_p_array)[j] < sentry){
                    sentry_index = j;
                    sentry = (*m_p_array)[j];
                }
            }
            std::swap((*m_p_array)[sentry_index], (*m_p_array)[i]);
        }
    }

    void Sort::heapSort()
    {

    }


}


