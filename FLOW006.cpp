#include <bits/stdc++.h>
using namespace std;

int getSum(int n)
{
    int val = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        val += rem;
        n = n / 10;
    }
    return val;
}
int main()
{
    int val, n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << getSum(n)<<"\n";
    }
    return 0;
}