#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, X;
    cin >> N >> X;
    int ans = 0, temp, ans2 = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        if (temp > ans2)
            ans2 = temp;
        ans += (((temp - 1) / X) + 1);
    }
    cout << min(ans, ans2) << endl;
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