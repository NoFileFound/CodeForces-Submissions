#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int x[4];
    for(int i = 0; i < 4; i++)
        cin >> x[i];

    int mx = *max_element(x, x + 4);
    for(int i = 0; i < 4; i++)
    {
        if(x[i] != mx) cout << mx - x[i] << ' ';
    }

    return 0;
}