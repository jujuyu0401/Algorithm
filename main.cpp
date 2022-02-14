#include <bits/stdc++.h>
#include "src/search/search.h"
#include "src/sort/sort.h"
#include "src/sort/test.hpp"
#include "src/leetcode/solution.h"
#include <algorithm>

#include <cmath>

using  std::cout;
using std::endl;

std::vector<int> produceRandint(unsigned int length);
void showDatas(std::vector<int>& v);


int main()
{
//    srand(time(0));
////    srand(0);
//    auto v = produceRandint(11);
//    v = std::vector<int>{2,	6,	13,	10,	13,	0};
//    showDatas(v);
//    auto vv = v;
//    std::sort(vv.begin(), vv.end());
//    showDatas(vv);
//    algorithm_sort::Sort s;
//    s.setArray(&v);
//    s.heapSortArray();
//    showDatas(v);




    // search
    std::vector<int> v_search{-1, 2, 3, 4, 5, 6};
    algorithm_search::Search test;
    test.setArray(&v_search);
    showDatas(v_search);
    std::cout << bool(test.isBinExist(-1)) << std::endl;

//    std::vector<int> s1{-1, 0, 9};
//    std::vector<int> s2{-25, -10, 10, 11};
//    std::vector<int> s3{2,9,17,30,41};
//    int best_dist = INT_MAX;
//    int i_best = -1; int j_best = -1; int k_best = -1;
//    for(int i = 0; i < s1.size(); ++i){
//        for(int j = 0; j < s2.size(); ++j){
//            for(int k = 0; k < s3.size(); ++k){
//                if((std::abs(s1[i] - s2[j]) + std::abs(s1[i] - s3[k]) + std::abs(s2[j] - s3[k])) < best_dist){
//                    i_best = i; j_best = j; k_best = k;
//                    best_dist = std::abs(s1[i] - s2[j]) + std::abs(s1[i] - s3[k]) + std::abs(s2[j] - s3[k]);
//                }
//            }
//        }
//    }

//    cout << s1[i_best] << "\t" << s2[j_best] << "\t" << s3[k_best] << endl;




    //leetcode
    algorithm_leetcode::Solution so;
    std::vector<std::vector<int>> v{{0, 0, 1, 1},
                                    {0, 1, 1, 0},
                                    {0, 1, 0, 1}};

    std::vector<std::vector<int>> vv{{0,0,0,0,0,0,0,0}};
    so.maxAreaOfIsland(vv);



    using f =  int (*)(int, int);
    //    std::function<int(int)> fffffff = std::bind(&show, std::placeholders::_1);

    //    test(std::bind(&shdocument.querySelector('video').playbackRate = 3ow, std::placeholders::_1), 1);



    //    std::shared_ptr<int> p = std::make_shared<int> ();

    //    TT ttt;
    //    ttt.func(std::bind(&sho    for(int i = 0; i < length; i++)
    //    {
    //        for(int j = 0; j < length; j++)
    //        {
    //            b[i][j] = a[j][i];
    //        }
    //    }w, std::placeholders::_1), 1);
    //    cout << endl << endl << endl;

    //    ttt.func([](int a)->int
    //    {
    //        std::cout << a << endl;
    //    }, 1);



    //    Third ff;

    //    First* pp;
    //    pp = ff.copy();
    //    pp->show();

    //    cout << endl;


    return 0;
}


std::vector<int> produceRandint(unsigned int length)
{
    std::vector<int> v(length);
    for(int i = 0; i < length; ++i){
        v[i] = rand() % 20;
    }
    return v;
}

void showDatas(std::vector<int>& v)
{
    for(int i: v){
        std::cout << i << "\t";
    }
    std::cout << endl;
}
