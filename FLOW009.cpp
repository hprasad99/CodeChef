#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long double q, p;

    while (t--)
    {
        double pur;
        cin >> q >> p;
        setprecision(6);
        if (q > 1000)
        {
            pur = (q * p) - (q * p * 0.10);
            printf("%lf", pur);
        }
        else
        {
            pur = q * p;
            printf("%lf", pur);
        }
    }
    return 0;
}