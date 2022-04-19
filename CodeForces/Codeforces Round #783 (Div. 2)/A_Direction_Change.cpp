#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a = min(n, m);
    int b = abs(n - m);

    if (a == 1 && b > 1)
    {
        cout << -1 << endl;
        return;
    }
    int ans = 2 * (a - 1);
    if (b % 2)
        ans += (2 * b) - 1;
    else
        ans += (2 * b);
    cout << ans << endl;
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