#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string ha = a.substr(0, a.find(':')), ma = a.substr(a.find(':') + 1);
    string hb = b.substr(0, b.find(':')), mb = b.substr(b.find(':') + 1);
    int r1 = ((ha[0] - '0') * 10 + (ha[1] - '0')) * 60 + (ma[0] - '0') * 10 + (ma[1] - '0');
    int r2 = ((hb[0] - '0') * 10 + (hb[1] - '0')) * 60 + (mb[0] - '0') * 10 + (mb[1] - '0');
    int ans = r1 - r2;
    if(ans < 0) 
		ans += 1440;
	
    cout << setw(2) << setfill('0') << ans / 60 << ':' << setw(2) << setfill('0') << ans % 60 << endl;
    return 0;
}