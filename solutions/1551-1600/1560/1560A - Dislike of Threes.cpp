#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> v;

void precomput(int n)
{
    int i = 1;
    while(true)
    {
        if(i % 10 == 3 || i % 3 == 0)
        {
            i++;
            continue;
        }

        if(v.size() == n) break;
        v.push_back(i);
        i++;
    }
}

int main()
{
    int T;
    cin >> T;
    precomput(1000);
    while(T--)
    {
        int n;
        cin >> n;
        cout << v[n - 1] << endl;
    }
    return 0;
}