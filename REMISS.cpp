/*https://www.codechef.com/problems/REMISS*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    long int res;
    while (t--)
    {
        scanf("%d %d",&a,&b);
        //res = a + b;
        printf("%d %d\n",max(a,b),a+b);
    }
    return 0;
}