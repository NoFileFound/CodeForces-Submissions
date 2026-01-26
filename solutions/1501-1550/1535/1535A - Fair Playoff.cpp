#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, s1, s2, s3, s4;
    cin >> T;
    while(T--)
    {
        cin >> s1 >> s2 >> s3 >> s4;
        cout << (max(s1, s2) > min(s3, s4) && max(s3, s4) >  min(s1, s2) ? "YES" : "NO") << endl;
    }

    return 0;
}