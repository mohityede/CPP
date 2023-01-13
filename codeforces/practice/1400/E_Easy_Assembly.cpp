#include <bits/stdc++.h>
#define ll long long
#define priQinc priority_queue<int, vector<int>, greater<int>>
#define priQdec priority_queue<int>
using namespace std;

void solve()
{
    int n, split = 0, combine, last;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        last = -1;
        for (int j = 0; j < k; j++)
        {
            int p;
            cin >> p;
            if (last != -1 && last > p)
                split++;
            last = p;
        }
    }
    combine = n + split - 1;
    cout << split << " " << combine << endl;
}

int main()
{
    int testCase = 1;
    // cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}