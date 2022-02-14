#include <iostream>
#include <algorithm>

#include <typeinfo>
#include "ecnu.h"
#include <map>
#include <thread>
#include <mutex>



using namespace std;




struct test_s
{
    test_s(int i = 0)
    {
        num=i;
    }
    int num;
};



bool cmp(test_s& A, test_s& B);


int i = 2;


int show()
{
    mutex m;
    cout << (void*) &m << endl;
    return 0;
}




int main()
{
    std::ios::sync_with_stdio(false);
    //   A_19();  B_19(); C_19();D_19();

//    string s;
//    s.push_back('1');

//    int *p = new int;
//    *p = 4;
//    //cout << (*p);
//    delete p;
//    delete p;


//    map<char, int> a;
//    a.insert(make_pair('a',2));
//    a.insert(make_pair('a',44));

   // cout << a.find('a')->second;


//    auto f = [](int x, int y)
//    {
//        return ++i;
//    };
//    int num = 100;

//    cout << f(100,12) << endl;


//    thread t1(show);
//    thread t2(show);

//    t1.join();
//    t2.join();

    //E_19();


    cout << "11" << endl;
    return 0;


}


bool cmp(test_s& A, test_s& B)
{
    if(A.num < B.num)
        return true;
    return false;
}


