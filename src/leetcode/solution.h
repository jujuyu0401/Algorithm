#ifndef ALGORITHM_LEETCODE__
#define ALGORITHM_LEETCODE__
#include <vector>
#include <algorithm>

namespace algorithm_leetcode
{
    class Solution;

}


class algorithm_leetcode::Solution
{
public:
    Solution();

    //695 media
    int maxAreaOfIsland(std::vector<std::vector<int>>& grid);
    void assignElement(std::vector<std::vector<int>>& src, int i, int j, int value);
    void show(std::vector<std::vector<int>>& src);

    //343 media
    int integerBreak(int n);
    void getNth(int* ary, int no);
};

#endif
