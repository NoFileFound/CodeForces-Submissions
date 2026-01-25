#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int a, b;

int get_num(int x)
{
    string s = to_string(x);
    string tmp = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != '0') tmp += s[i];
    }

    stringstream ss(tmp);
    x = 0;
    ss >> x;
    return x;
}

int main()
{
    cin >> a >> b;
    cout << (get_num(a) + get_num(b) == get_num(a + b) ? "YES" : "NO") << endl;
	return 0;
}