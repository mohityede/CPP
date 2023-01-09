#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0, cycles = 0;
    vector<int> vis(n + 1, false), computed(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == false)
        {
            cycles++;
            int curr = i;
            while (vis[curr] == false)
            {
                vis[curr] = true;
                computed[curr] = cycles;
                curr = arr[curr - 1];
            }
        }
    }
    ans = n - cycles + 1;
    for (int i = 2; i <= n; i++)
    {
        // cout << "c:" << computed[i] << " ";
        if (computed[i] == computed[i - 1])
        {
            ans -= 2;
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    int testCase = 1;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}