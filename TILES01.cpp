//https://www.codechef.com/IARCSJUD/problems/TILES01
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long dp[n + 5];
    dp[1] = 1, dp[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    }
    cout << dp[n] << "\n";
    return 0;
}