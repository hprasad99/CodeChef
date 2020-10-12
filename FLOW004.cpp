#include <bits/stdc++.h>
using namespace std;
int first(int n)
{
    while (n >= 10)
    {
        n /= 10;
    }
    return n;
}
int last(int n)
{
    return (n % 10);
}
int main()
{
    int t;
    long long n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << first(n) + last(n) << "\n";
    }
    return 0;
}