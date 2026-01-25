#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
	int n, k = INT_MAX, a[1200], ansI = 0, ansJ = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n - 1; i++)
    {
        if(k > abs(a[i] - a[i + 1]))
        {
            k = abs(a[i] - a[i + 1]);
            ansI = i + 1;
            ansJ =i + 2;
        }
    }

    if(k > abs(a[0] - a[n - 1]))
    {
		k = abs(a[0] - a[n - 1]);
		ansI = n;
		ansJ = 1;
    }

    cout << ansI << ' ' << ansJ << endl;
    return 0;
}