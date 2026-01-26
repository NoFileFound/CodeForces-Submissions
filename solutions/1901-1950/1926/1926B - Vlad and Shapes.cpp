#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, T;
    char ch;
    cin >> T;
    while(T--)
    {
        bool flag = false;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int cnt1 = 0;
            for(int j = 0; j < n; j++)
            {
                cin >> ch;
                if(ch == '1') cnt1++;
            }

            if(cnt1 == 1 && n > 1) flag = true;
        }

        cout << (flag ? "TRIANGLE" : "SQUARE") << endl;
    }

    return 0;
}