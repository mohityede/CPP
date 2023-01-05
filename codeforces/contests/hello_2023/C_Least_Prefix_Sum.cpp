#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m, i, j;
    cin >> n >> m;
    ll ans = 0;

    priority_queue<pair<ll, ll>> q;

    ll a[n + 1], p1[n + 1], p2[n + 1], b[n + 1];

    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    if (a[m] > 0 && m != 1)
    {
        a[m] = -a[m];
        b[m] = -b[m];
        ans++;
    }

    p1[1] = a[1];
    p2[1] = b[1];

    for (i = 2; i <= n; i++)
    {
        p2[i] = p2[i - 1] + b[i];
        p1[i] = p1[i - 1] + a[i];
    }
    // check for m-1 to 1
    for (i = m - 1; i >= 1; i--)
    {
        while (p1[i] < p1[m])
        {
            p1[m] = p1[m] - 2 * (q.top().first);
            q.pop();
            ans++;
        }
        if (a[i] > 0)
        {
            q.push({a[i], i});
        }
    }
    // clear priority queue
    while (q.empty() == false)
    {
        q.pop();
    }
    // check for m+1 to n
    for (i = m + 1; i <= n; i++)
    {
        if (a[i] < 0)
        {
            q.push({-a[i], i});
        }
        while (p2[i] < p2[m])
        {
            p2[m] = p2[m] - 2 * (q.top().first);
            q.pop();
            ans++;
        }
    }

    cout << ans << "\n";
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