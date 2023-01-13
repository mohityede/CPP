#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll inf = (1ll << 62);

void solve()
{
    ll n, x;
    cin >> n >> x;

    ll ma = n, mi = inf;
    ll mask = 0;
    for (ll i = 0; i < 61; i++)
    {
        if (!((n >> i) & 1))
        {
            if ((x >> i) & 1)
            {
                mi = -1;
                break;
            }
        }
        else
        {
            ll now = n + (1ll << i) - (n & mask);
            if ((x >> i) & 1)
            {
                mi = min(mi, now);
            }
            else
            {
                ma = max(ma, now);
            }
        }
        mask += (1ll << i);
    }
    if (ma < mi)
        cout << ma << '\n';
    else
        cout << "-1\n";
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