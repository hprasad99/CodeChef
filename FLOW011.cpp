//https://www.codechef.com/problems/FLOW011
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int salary;
    double hra, da, g;
    while (t--)
    {
        cin >> salary;
        if (salary < 1500)
        {
            hra = 0.1 * salary;
            da = 0.9 * salary;
            printf("%.2f\n",salary + hra + da);
        }
        else if (salary >= 1500)
        {
            hra = 500;
            da = 0.98 * salary;
            printf("%.2f\n",salary + hra + da);
        }
    }
    return 0;
}