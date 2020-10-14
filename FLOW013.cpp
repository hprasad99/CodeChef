// https://www.codechef.com/problems/FLOW013
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int res = 0, t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        res = a + b + c;
        if (res == 180)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}