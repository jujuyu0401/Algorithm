#ifndef ALGORITHM_SEARCH__
#define ALGORITHM_SEARCH__
#include <vector>

namespace algorithm_search
{
    class Search;
};


class algorithm_search::Search
{
public:
    Search();
    void setArray(std::vector<int>* a_v);
    bool isBinExist(int a_value);
    bool binSearch(int a_value, int a_x, int a_y);

private:
    std::vector<int>* m_p_array;
};






#endif // !__BIN_SEARCH__


