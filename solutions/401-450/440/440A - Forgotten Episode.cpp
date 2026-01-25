#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[100005];

int mex()
{
    set<int> b;
    for(int i = 0; i < n - 1; i++)
        b.insert(a[i]);

    int ans = 1;
    while(b.count(ans)) ans++;
    return ans;
}

int main()
{
    cin >> n;
    for(int i = 0; i < n - 1; i++)
        cin >> a[i];

    cout << mex() << endl;
    return 0;
}