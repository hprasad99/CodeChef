//https://www.codechef.com/problems/TRISQ
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, b;
    cin >> t;
    while (t--)
    {
        cin >> b;
        b -= 2;
        b /= 2;
        b = b * (b + 1) / 2;
        cout << b<<"\n";
    }
    return 0;
}