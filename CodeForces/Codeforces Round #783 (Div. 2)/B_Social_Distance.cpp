#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n, m;
    cin >> n >> m;
    int arr[n];
    long long int ans = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
        if (i != 0)
            ans += max(arr[i], arr[i - 1]);
    if (ans > m)
    {
        cout << "NO" << endl;
        return;
    }
    ans += max(arr[n - 1], arr[0]);
    if (ans > m)
    {
        cout << "NO" << endl;
        return;
    }
    ans += n;
    if (ans > m)
        cout << "NO";
    else
        cout << "YES";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}