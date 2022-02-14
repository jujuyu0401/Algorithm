#include "bin_search.h"

sort::BinSearch::BinSearch(std::vector<int>& a_v)
{
    m_array = a_v;
}
bool sort::BinSearch::isExist(int a_value)
{
    if(!m_array.size())
        return false;
    return search(a_value, 0, m_array.size() - 1);
}

bool sort::BinSearch::search(int a_value, int a_x, int a_y)
{
    if(a_x == a_y){
        return a_value == m_array[a_x];
    }
    int mid = (a_x + a_y) / 2;
    if(a_x == mid){
        return (m_array[a_x] == a_value) || (m_array[a_y] == a_value);
    }
    if(m_array[mid] == a_value){
        return true;
    }
    if(m_array[mid] > a_value){
        return search(a_value, a_x, mid - 1);
    }
    else{
        return search(a_value, mid + 1, a_y);
    }

}
