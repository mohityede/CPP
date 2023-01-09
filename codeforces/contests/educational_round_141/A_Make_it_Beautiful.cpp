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
    int sum = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (sum == arr[i])
        {
            flag = false;
            break;
        }
        sum += arr[i];
    }

    if (flag)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    sort(arr.begin(), arr.end(), greater<int>());
    int end = n - 1;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum == arr[i])
        {
            if (arr[end] == arr[i])
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                swap(arr[i], arr[end]);
            }
        }
        sum += arr[i];
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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