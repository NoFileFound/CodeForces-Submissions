#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[30], che = 0, bice = 0, bac = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        if(i % 3 == 0) che += a[i];
        else if(i % 3 == 1) bice += a[i];
        else bac += a[i];
    }

    cout << (che > bice && che > bac ? "chest" : (bice > che & bice > bac ? "biceps" : "back")) << endl;
    return 0;
}