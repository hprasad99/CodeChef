/*  https://www.codechef.com/problems/FLOW018   */
#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int getfact(int n)
{
    int ans = 1L;
    for (long int i = 2; i <= n; i++)
    {
        ans = (ans * i) % MOD;
    }
    return ans;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << getfact(n) << "\n";
    }
    return 0;
}