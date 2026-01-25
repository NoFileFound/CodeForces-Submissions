#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int cnt0 = count(s.begin(), s.end(), '0');
    int cnt1 = count(s.begin(), s.end(), '1');
    cout << (cnt1 == 0 ? "0" : "1" + string(cnt0, '0')) << endl;
    return 0;
}