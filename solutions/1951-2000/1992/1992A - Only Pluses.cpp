#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
	int T, a, b, c;
    cin >> T;
    while(T--)
    {
        cin >> a >> b >> c;
        for(int i = 0; i < 5; i++)
        {
            int minel = min(a, min(b, c));
            if(minel == a) a++;
            else if(minel == b) b++;
            else if(minel == c) c++;
        }

        cout << a * b * c << endl;
    }

    return 0;
}