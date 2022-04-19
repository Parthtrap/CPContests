#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n;
    cin >> n;
    long long int arr[n], arr2[n], temp;
    long long int ans = 0, minAnswer = LLONG_MAX;
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    for (long long int i = 0; i < n; i++)
    {
        ans = 0;
        arr[i] = 0;
        for (long long int j = i - 1; j >= 0; j--)
        {
            if (arr[j + 1] < arr[j])
                temp = 1;
            else
                temp = ((arr[j + 1] / arr[j]) + 1);
            ans += temp;
            arr[j] = temp * arr[j];
        }
        for (long long int j = i + 1; j < n; j++)
        {
            if (arr[j - 1] < arr[j])
                temp = 1;
            else
                temp = ((arr[j - 1] / arr[j]) + 1);
            ans += temp;
            arr[j] = temp * arr[j];
        }
        minAnswer = min(minAnswer, ans);
        for (long long int i = 0; i < n; i++)
            arr[i] = arr2[i];
    }
    cout << minAnswer;
}