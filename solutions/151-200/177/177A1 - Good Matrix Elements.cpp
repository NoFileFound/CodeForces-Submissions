#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[102][102];

void read()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}

int get_main_diagonal_sum()
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i][i];
        a[i][i] = 0;
    }

    return sum;
}

int get_second_diagonal_sum()
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i][n - 1 - i];
        a[i][n - 1 - i] = 0;
    }

    return sum;
}

int get_middle_row_sum()
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[(n - 1) / 2][i];
        a[(n - 1) / 2][i] = 0;
    }

    return sum;
}

int get_middle_column_sum()
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i][(n - 1) / 2];
        a[i][(n - 1) / 2] = 0;
    }

    return sum;
}

int main()
{
    read();
    cout << get_main_diagonal_sum() + get_second_diagonal_sum() + get_middle_row_sum() + get_middle_column_sum() << endl;
    return 0;
}