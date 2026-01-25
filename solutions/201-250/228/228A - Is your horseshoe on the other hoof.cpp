#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int s1, s2, s3, s4, ans = 0;
    cin >> s1 >> s2 >> s3 >> s4;
    if(s1 == s2) ans++;
    if(s1 == s3 || s2 == s3) ans++;
    if(s1 == s4 || s2 == s4 || s3 == s4) ans++;
    cout << ans << endl;
    return 0;
}