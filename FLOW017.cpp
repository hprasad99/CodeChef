#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if ((a > b && a < c) || (a < b && a > c))
        {
            cout << a << "\n";
        }
        else if ((b > a && b < c) || (b < a && b > c))
        {
            cout << b << "\n";
        }
        else if ((c > a && c < b) || (c > b && c < a))
        {
            cout << c << "\n";
        }
    }
    return 0;
}