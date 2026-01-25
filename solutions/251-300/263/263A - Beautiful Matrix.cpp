#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[5][5];

void read()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
}

int find_dist()
{
    int i, j;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(a[i][j] == 1) return abs(i - 2) + abs(j - 2);
        }
    }

    return -1;
}

int main()
{
    read();
    cout << find_dist() << endl;
    return 0;
}