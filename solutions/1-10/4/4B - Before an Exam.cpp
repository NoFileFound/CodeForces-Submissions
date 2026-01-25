#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int d, sumTime, minTime[300], maxTime[300], totalMinTime = 0, totalMaxTime = 0, schedule[300];
    cin >> d >> sumTime;
    for(int i = 0; i < d; i++)
    {
        cin >> minTime[i] >> maxTime[i];
        totalMinTime += minTime[i];
        totalMaxTime += maxTime[i];
    }

    if(totalMinTime > sumTime || sumTime > totalMaxTime)
    {
        cout << "NO" << endl;
        return 0;
    }

    for(int i = 0; i < d; i++) schedule[i] = minTime[i];
    int remainingTime = sumTime - totalMinTime;
    for(int i = 0; i < d; i++)
    {
        if(remainingTime <= 0) break;

        int studyTime = min(remainingTime, maxTime[i] - minTime[i]);
        schedule[i] += studyTime;
        remainingTime -= studyTime;
    }

    cout << "YES" << endl;
    for(int i = 0; i < d; i++)
        cout << schedule[i] << ' ';

    cout << endl;
    return 0;
}

/*
2 5
0 1
3 5
*/