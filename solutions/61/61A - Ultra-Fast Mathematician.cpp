#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
	string a, b, ans = "";
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++)
		ans += (a[i] != b[i] ? '1' : '0');

    cout << ans << endl;
    return 0;
}