#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool next_year(int n)
{
    int cnt = 0;
    set<int> st;
    while(n > 0)
    {
        cnt++;
        st.insert(n % 10);
        n /= 10;
    }

    return cnt == st.size();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    n++;
    while(!next_year(n)) n++;

    cout << n << endl;
    return 0;
}