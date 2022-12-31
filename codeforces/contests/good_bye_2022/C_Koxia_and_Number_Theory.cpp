#include <bits/stdc++.h>
using namespace std;

bool getAns(int n, long long int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                return false;
            if (arr[i] == 1 || arr[j] == 1)
                return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << (getAns(n, arr) ? "YES" : "NO") << endl;
    }
    return 0;
}