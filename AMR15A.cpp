//https://www.codechef.com/problems/AMR15A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    static int n, a[100], count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    if (count > 0)
    {
        printf("READY FOR BATTLE\n");
    }
    else
    {
        printf("NOT READY\n");
    }
    return 0;
}