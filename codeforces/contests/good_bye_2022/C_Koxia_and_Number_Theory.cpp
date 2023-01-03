#include <bits/stdc++.h>
using namespace std;

bool getAns(int n, long long int arr[])
{
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            return false;
    }
    for (int ind = 2; ind <= (n / 2); ind++)
    {
        vector<int> temp(ind, 0);
        for (int i = 0; i < n; i++)
        {
            temp[arr[i] % ind]++;
        }
        if (*min_element(temp.begin(), temp.end()) >= 2)
            return false;
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