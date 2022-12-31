#include <bits/stdc++.h>
using namespace std;

long long int getAns(int n, int m, int arr1[], int arr2[])
{
    for (int i = 0; i < m; i++)
    {
        int currM = arr2[i];
        // bool flag=false;
        int minInd = 0, maxi = INT_MAX;
        // int maxInd = -1, mani = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            if (maxi > arr1[j])
            {
                maxi = arr1[j];
                minInd = j;
            }
        }
        arr1[minInd] = arr2[i];
    }
    long long int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (long long int)arr1[i];
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        cout << getAns(n, m, arr1, arr2) << endl;
    }
    return 0;
}