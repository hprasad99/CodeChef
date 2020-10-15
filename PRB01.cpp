// https://www.codechef.com/problems/PRB01
#include <bits/stdc++.h>
using namespace std;
void primal(int n)
{
    bool flag = 0;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("no\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("yes\n");
    }
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        primal(n);
    }
    return 0;
}