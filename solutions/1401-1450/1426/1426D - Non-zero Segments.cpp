#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[200069];

int main()
{
    long long n, ans = 0, sum = 0;
    set<long long> s;
    cin >> n;
    s.insert(0);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if(s.count(sum))
        {
            ans++;
            s.clear();
            s.insert(0);
            sum = a[i];
        }

        s.insert(sum);
    }

    cout << ans << endl;
    return 0;
}