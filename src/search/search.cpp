#include "search.h"

namespace algorithm_search {

    Search::Search()
    {

    }

    void Search::setArray(std::vector<int> *a_v)
    {
        m_p_array = a_v;
    }


    bool Search::isBinExist(int a_value)
    {
        if(!m_p_array->size())
            return false;
        return binSearch(a_value, 0, m_p_array->size() - 1);
    }

    bool Search::binSearch(int a_value, int a_x, int a_y)
    {
        if(a_x == a_y){
            return a_value == (*m_p_array)[a_x];
        }
        int mid = (a_x + a_y) / 2;
        if(a_x == mid){
            return ((*m_p_array)[a_x] == a_value) || ((*m_p_array)[a_y] == a_value);
        }
        if((*m_p_array)[mid] == a_value){
            return true;
        }
        if((*m_p_array)[mid] > a_value){
            return binSearch(a_value, a_x, mid - 1);
        }
        else{
            return binSearch(a_value, mid + 1, a_y);
        }

    }

}






















