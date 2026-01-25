#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
	string s;
    cin >> s;
    char maxEl = *max_element(s.begin(), s.end());
    for(int i = 0; i < count(s.begin(), s.end(), maxEl); i++)
        cout << maxEl;

    return 0;
}