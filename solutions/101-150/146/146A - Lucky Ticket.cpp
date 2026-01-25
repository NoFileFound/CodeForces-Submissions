#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int find_sum(string s, int length)
{
    if(length > s.size()) return -1;

    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        if(s[i] != '4' && s[i] != '7') return -1;

        sum += s[i] - '0';
    }

    return sum;
}

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int first_part = find_sum(s, n / 2);
    if(first_part == -1)
    {
        cout << "NO" << endl;
        return 0;
    }

    reverse(s.begin(), s.end());
    int second_part = find_sum(s, n / 2);
    if(second_part == -1)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << (first_part == second_part ? "YES" : "NO") << endl;
    return 0;
}