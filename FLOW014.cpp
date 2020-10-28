//https://www.codechef.com/problems/FLOW014
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    double hard, carbon, tensile;
    while (t--)
    {
        cin >> hard >> carbon >> tensile;
        if (hard > 50 && carbon < 0.7 && tensile > 5600)
        {
            cout << 10 << "\n";
        }
        else if (hard > 50 && carbon < 0.6)
        {
            cout << 9 << "\n";
        }
        else if (carbon < 0.7 && tensile > 5600)
        {
            cout << 8 << "\n";
        }
        else if (hard > 50 && tensile > 5600)
        {
            cout << 7 << "\n";
        }
        else if (hard > 50 || carbon < 0.7 || tensile > 5600)
        {
            cout << 6 << "\n";
        }
        else
        {
            cout << 5 << "\n";
        }
    }
    return 0;
}