#include "solution.h"
#include <iostream>

namespace algorithm_leetcode {

    Solution::Solution()
    {

    }

    //695
    int Solution::maxAreaOfIsland(std::vector<std::vector<int>> &grid)
    {
        std::vector<std::vector<int>> v_temp;
        v_temp.resize(grid.size());
        for(auto i = 0; i < v_temp.size(); ++i){
            v_temp[i].resize(grid[i].size());
        }

        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[i].size(); ++j){
                if(0 == grid[i][j]){
                    v_temp[i][j] = 0;
                }
                else{
                    v_temp[i][j] = 1;
                }
            }
        }

        int no = 1;
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[i].size(); ++j){
                if(1 == v_temp[i][j]){
                    assignElement(v_temp, i, j, no + 100);
                    ++no;
                }
            }
        }


        // statistic of every contours
        std::vector<int> v_contours;
        std::fill(v_contours.begin(), v_contours.end(), 0);
        for(int i = 0; i < v_temp.size(); ++i){
            for(int j = 0; j < v_temp[i].size(); ++j){
                if(100 <= v_temp[i][j]){
                    if(v_contours.size() < v_temp[i][j] - 99){
                        v_contours.resize(v_temp[i][j] - 99);
                    }
                    ++v_contours[v_temp[i][j] - 100];
                }
            }
        }
        if(v_contours.size() == 0){
            return 0;
        }
        int no_cpy = *std::max_element(v_contours.begin(), v_contours.end());
        // return no_cpy;
        int iter {0};
        for(; iter < v_contours.size(); ++iter){
            if(no_cpy == v_contours[iter]){
                break;
            }
        }
        iter += 100;
        for(int i = 0; i < v_temp.size(); ++i){
            for(int j = 0; j < v_temp[i].size(); ++j){
                if(iter == v_temp[i][j]){
                    grid[i][j] = 1;
                }
                else{
                    grid[i][j] = 0;
                }
            }
        }
    }


    void Solution::assignElement(std::vector<std::vector<int> > &src, int i, int j, int value)
    {
        src[i][j] = value;
        if( 0 <= (i - 1) && 1 == src[i - 1][j]){
            assignElement(src, i - 1, j, value);
        }
        if( src.size() > (i + 1) && 1 == src[i + 1][j]){
            assignElement(src, i + 1, j, value);
        }
        if( 0 <= (j - 1) && 1 == src[i][j - 1]){
            assignElement(src, i, j - 1, value);
        }
        if( src[i].size() > (j + 1) && 1 == src[i][j + 1]){
            assignElement(src, i, j + 1, value);
        }
    }

    void Solution::show(std::vector<std::vector<int> > &src)
    {
        for(int i = 0; i < src.size(); ++i){
            for(int j = 0; j < src[i].size(); ++j){
                std::cout << src[i][j] << "\t";
            }
            std::cout << std::endl;
        }

    }


    //343
    int Solution::integerBreak(int n)
    {
        int int_result = 0;
        int* memory = new int[n];

        int i = 0;
        for(; i < n; ++i)
        {
            memory[i] = 0;
        }


        for(i = 1; i < n; ++i)
        {
            if( 0 == memory[i])
            {
                getNth(memory, i);
            }
            if( 0 == memory[ n - i])
            {
                getNth(memory, n - i);
            }

            if( int_result < memory[i] * memory[ n - i])
            {
                int_result = memory[i] * memory[ n - i];
            }
        }
        return int_result;

    }

    void Solution::getNth(int* ary, int no)
    {
        if( 0 == no)
        {
            return;
        }

        if( 0 != ary[no])
            return ;


        if( 1 == no)
        {
            ary[no] = 1;
            return ;
        }


        int i = 1;
        int int_result = 1;
        for(; i < no; ++i)
        {
            if( 0 == ary[i])
            {
                getNth(ary, i);
            }
            if( 0 == ary[ no - i])
            {
                getNth(ary, no - i);
            }

            if( int_result < ary[i] * ary[ no - i])
            {
                int_result = ary[i] * ary[ no - i];
            }

        }
        if( int_result < no)
        {
            int_result = no;
        }
        ary[no] = int_result;
    }

}

