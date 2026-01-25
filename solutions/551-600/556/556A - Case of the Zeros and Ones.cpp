#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    cout << abs(count(s.begin(), s.end(), '0') - count(s.begin(), s.end(), '1')) << endl;
    return 0;
}