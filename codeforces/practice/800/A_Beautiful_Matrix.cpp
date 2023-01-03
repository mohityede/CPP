#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int row, col;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int num;
            cin >> num;
            if (num == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    int ans = abs(2 - row) + abs(2 - col);
    cout << ans << endl;
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