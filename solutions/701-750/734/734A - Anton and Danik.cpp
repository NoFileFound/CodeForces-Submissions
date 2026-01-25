#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int cntA = count(s.begin(), s.end(), 'A');
    int cntD = count(s.begin(), s.end(), 'D');
    cout << (cntA > cntD ? "Anton" : cntA == cntD ? "Friendship" : "Danik") << endl;
    return 0;
}