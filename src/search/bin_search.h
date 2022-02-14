#ifndef __BIN_SEARCH__
#define __BIN_SEARCH__
#include <vector>

namespace sort
{
    class BinSearch;
};


class sort::BinSearch
{
public:
    BinSearch(std::vector<int>& a_v);
    bool isExist(int a_value);
    bool search(int a_value, int a_x, int a_y);

private:
    std::vector<int> m_array;
};






#endif // !__BIN_SEARCH__


