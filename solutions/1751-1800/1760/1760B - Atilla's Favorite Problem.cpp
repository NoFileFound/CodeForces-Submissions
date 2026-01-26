#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n;
    string s;
    cin >> T;
    while(T--)
    {
        cin >> n >> s;
        char max_el = *max_element(s.begin(), s.end());
        cout << (max_el - 'a') + 1 << endl;
    }

    return 0;
}