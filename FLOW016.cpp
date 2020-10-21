#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int a, b, g, l;
        cin >> a >> b;
        g = __gcd(a, b);
        l = abs(a * b) / g;
        cout << g << " " << l << "\n";
    }
    return 0;
}