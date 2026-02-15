#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, a, b, n, x[105];
    cin >> T;
    while(T--)
    {
        cin >> a >> b >> n;
        for(int i = 0; i < n; i++)
            cin >> x[i];

        long long sum = 0;
        for(int i = 0; i < n; i++)
			sum += min(x[i], a - 1);

        cout << sum + b << endl;
    }

    return 0;
}

/*
2
5 3 3
1 1 7
7 1 5
1 2 5 6 8
*/