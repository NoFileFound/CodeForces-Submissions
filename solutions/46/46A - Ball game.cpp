#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0, j = 0; i < n; i++, j += i)
    {
        if(i > 0)
        {
            j %= n;
            cout << j + 1 << ' ';
        }
    }
	
    return 0;
}