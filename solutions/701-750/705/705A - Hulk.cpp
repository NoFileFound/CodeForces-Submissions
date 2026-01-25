#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string msgs[2] = {"I hate", "that I love"};

    int n;
    cin >> n;
    for(int i = 0; n--; i++)
    {
        if(i > 1)
        {
            cout << "that ";
            i = 0;
        }
        cout << msgs[i] << ' ';
    }

    cout << "it" << endl;
    return 0;
}