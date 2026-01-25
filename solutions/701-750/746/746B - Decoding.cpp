#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s, tmp = "";
    cin >> n >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(i & 1) tmp += s[i];
        else tmp = s[i] + tmp;
    }

    if(s.size() & 1)
        reverse(tmp.begin(), tmp.end());

    cout << tmp << endl;
    return 0;
}