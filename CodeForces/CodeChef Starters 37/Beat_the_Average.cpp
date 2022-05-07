#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    long long int ans = 0;
    if (x == m || x == 0)
        cout << 0;
    else
    {
        ans = x * n;
        ans /= (x + 1);
        cout << ans;
    }
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