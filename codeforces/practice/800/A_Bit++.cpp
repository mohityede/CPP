#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string curr;
        cin >> curr;
        if (curr == "X++" || curr == "++X")
            ans++;
        if (curr == "X--" || curr == "--X")
            ans--;
    }
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