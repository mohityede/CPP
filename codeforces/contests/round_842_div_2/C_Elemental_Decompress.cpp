#include <bits/stdc++.h>
#define ll long long
#define priQdec priority_queue<int>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> count(n + 1, 0), p(n), q(n), paired(n + 1);
    priQdec pq;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (count[i] > 2)
        {
            cout << "NO" << endl;
            return;
        }
        if (count[i] == 0)
        {
            pq.push(i);
        }
    }

    for (int i = n; i >= 1; i--)
    {
        if (count[i] == 1)
        {
            paired[i] = i;
        }
        else if (count[i] == 2)
        {
            int biggest = pq.top();
            if (biggest < i)
            {
                paired[i] = biggest;
                paired[biggest] = i;
                pq.pop();
            }
            else
            {
                flag = true;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    // cout << n << endl;
    vector<bool> vis(n + 1, false);
    for (int i = 0; i < n; i++)
    {
        if (vis[arr[i]] == false)
        {
            p[i] = arr[i];
            q[i] = paired[arr[i]];
            vis[arr[i]] = true;
        }
        else if (vis[arr[i]] == true)
        {
            p[i] = paired[arr[i]];
            q[i] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
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