//  https://www.codechef.com/problems/PALL01
#include <bits/stdc++.h>
using namespace std;
// int getPalindrome(int n)
// {
//     int rev, rem = 0;
//     while (n != 0)
//     {
//         rem = n % 10;
//         rev = rev * 10 + rem;
//         n /= 10;
//     }
//     //printf("%d", rev);
//     return rev;
// }
int main()
{
    int t;
    string val,n;
    scanf("%d", &t);
    while (t--)
    {
        cin >> n;
        val = n;
        reverse(n.begin(), n.end());
        if (val == n)
        {
            printf("wins\n");
        }
        else
        {
            printf("loses\n");
        }
    }
    return 0;
}