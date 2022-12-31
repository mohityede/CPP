#include <bits/stdc++.h>
using namespace std;

int getAns(int n, int k, int arr[])
{
    int limit = arr[k - 1];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 && arr[i] >= limit)
            ans++;
    }
    return ans;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << getAns(n, k, arr) << endl;
    return 0;
}