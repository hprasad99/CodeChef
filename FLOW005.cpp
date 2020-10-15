// https://www.codechef.com/problems/FLOW005
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        int sum=0;
        scanf("%d\n", &n);
        sum +=n/100;
        n%=100;
        sum+=n/50;
        n%=50;
        sum+=n/10;
        n%=10;
        sum+=n/5;
        n%=5;
        sum+=n/2;
        sum+=n%2;
        printf("%d\n",sum);
    }
    return 0;
}