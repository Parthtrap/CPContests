#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, temp;
    cin >> n;
    int c[2] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1)
            c[1]++;
        else
            c[0]++;
    }
    if (c[0] <= c[1])
        cout << 1 << endl;
    else
        cout << 0 << endl;
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