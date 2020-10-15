// https://www.codechef.com/problems/DECINC
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 4 == 0)
    {
        ++n;
    }
    else
    {
        --n;
    }
    printf("%d\n", n);
    return 0;
}