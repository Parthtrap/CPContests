#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, temp;
    cin >> n;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        ans += temp;
    }
    n /= 2;
    if (ans % n != 0)
        cout << "NO" << endl;
    else
    {
        ans /= n;
        if (ans % 2 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
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