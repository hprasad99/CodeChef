#include <bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int rem, rev = 0;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}
int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        cout<<reverse(n)<<"\n";
    }
    return 0;
}