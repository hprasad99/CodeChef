/*  https://www.codechef.com/problems/CIELRCPT  */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, ans, cnt, x;
    scanf("%d", &t);
    int p;
    while (t--)
    {
        cin >> p;
        ans = 0;
        for (int i = 11; i >= 0; i--)
        {
            if (p == 0)
                break;
            x = pow(2, i);
            cnt = p / x;
            ans += cnt;
            p -= (cnt * x);
        }
        printf("%d\n", ans);
    }
    return 0;
}