#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, l, r, x, a, b;
    cin >> T;
    while(T--)
    {
        cin >> l >> r >> x >> a >> b;
        if(a == b)
        {
            cout << 0 << endl;
            continue;
        }

        if(abs(a - b) >= x)
        {
            cout << 1 << endl;
            continue;
        }

        bool al = abs(a - l) >= x, ar = abs(a - r) >= x;
        bool bl = abs(b - l) >= x, br = abs(b - r) >= x;
        cout << (((al && bl) || (ar && br)) ? 2 : ((al && br) || (ar && bl)) ? 3 : -1) << endl;
    }

    return 0;
}

/*
10
3 5 6
3 3
0 15 5
4 5
0 10 5
3 7
3 5 6
3 4
-10 10 11
-5 6
-3 3 4
1 0
-5 10 8
9 2
1 5 1
2 5
-1 4 3
0 2
-6 3 6
-1 -4
*/