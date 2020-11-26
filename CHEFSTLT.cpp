//https://www.codechef.com/problems/CHEFSTLT
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t;
    scanf("%d", &t);
    while (t--)
    {
        int ans1 = 0, ans2 = 0;
        string s1, s2;
        cin >> s1 >> s2;
        for (i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i] && s1[i] != '?' && s2[i] != '?')
            {
                ans1++;
                ans2++;
            }
            if (s1[i] == '?' || s2[i] == '?')
            {
                ans2++;
            }
        }
        printf("%d %d\n", ans1, ans2);
    }
    return 0;
}