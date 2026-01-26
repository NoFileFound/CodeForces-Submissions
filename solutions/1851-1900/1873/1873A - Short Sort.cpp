#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int T;
char a, b, c;

int main()
{
    cin >> T;
    while(T--)
    {
        cin >> a >> b >> c;
        if(a == 'a' && b == 'b' && c == 'c')
            cout << "Yes" << endl;
        else
        {
            swap(a, b);
            if(a == 'a' && b == 'b' && c == 'c')
                cout << "Yes" << endl;
            else
            {
                swap(a, b);
                swap(b, c);
                if(a == 'a' && b == 'b' && c == 'c')
                    cout << "Yes" << endl;
                else
                {
                    swap(b, c);
                    swap(a, c);
                    if(a == 'a' && b == 'b' && c == 'c')
                        cout << "Yes" << endl;
                    else
                        cout << "No" << endl;
                }
            }
        }
    }

    return 0;
}