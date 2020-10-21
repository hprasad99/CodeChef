//https://www.codechef.com/problems/DIFFSUM
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n1, n2;
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << n1 - n2 << "\n";
    }
    else
    {
        cout << n1 + n2 << "\n";
    }

    return 0;
}