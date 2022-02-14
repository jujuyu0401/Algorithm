#include "ecnu.h"

ECNU::ECNU()
{

}

void ECNU::show()
{
    cout << "11";
}


void A_19()
{
    int length;
    cin >> length;

    int i ;
    int* wait_sort = new int[length];
    for(i = 0; i < length; i++)
    {
        cin >> wait_sort[i];
    }

    sort(wait_sort, wait_sort + length, greater<int>());


    for(i = 0; i < length; i++)
    {
        cout << wait_sort[i] << '\t';
    }
}


void B_19()
{
    int num_charge;
    int num_five;
    cin >> num_charge >> num_five;

    int num_total = 0;

    while( (num_charge >= 5) && (num_five > 0) )
    {
        num_charge -= 5;
        num_five -= 1;
        num_total++;
    }

    int odd = num_charge % 2;
    if(odd == 1)
    {
        num_total++;
    }

    num_total += ( num_charge - odd) / 2;


    cout << num_total;


}



void C_19()
{
    long long f[100];
    f[0] = 1;
    f[1] = 1;
    int i = 0;
    for(i = 2; i < 100; i++)
    {
        f[i] = f[i - 1] + f[i - 2];

    }

    long long data;
    cin >> data;
    long long* t= find(f,f + 100, data);
    if(t == f + 100)
    {
        cout << "False";
    }
    else
    {
        cout << "True";
    }
}


void D_19()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    string s = s1 + s2;
    sort(s.begin(), s.end());

    for(int i = 0; i < s.size() - 1; i++)
    {
        if(s[i] == s[i + 1])
        {
            s.erase(i + 1, 1);
            i--;
        }
    }
    cout << s;


}


void E_19()
{
    default_random_engine e;
    e.seed(time(0));

    int row  = 5;
    int col = 4;

    int** p = new int* [col];
    for(int i = 0; i < col;i++)
    {
        p[i] = new int[row];
    }

    for(int i = 0;i < col;i++)
    {
        for(int j = 0; j < row;j++)
        {
            p[i][j] = e() % 100;
            cout << p[i][j] << '\t';
        }
        cout << endl;
    }


}
