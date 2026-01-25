#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int row = 0, col = 0;
    vector<string> a(8);
    for(int i = 0; i < 8; i++)
    {
        cin >> a[i];
        if(count(a[i].begin(), a[i].end(), 'B') == 8) row++;
    }

    for(int j = 0; j < 8; j++)
    {
        int cnt = 0;
        for(int i = 0; i < 8; i++) cnt += (a[i][j] == 'B');
        if(cnt == 8) col++;
    }

    cout << (row == 0 && col == 0 ? 0 : row == 8 || col == 8 ? 8 : row + col) << endl;
    return 0;
}