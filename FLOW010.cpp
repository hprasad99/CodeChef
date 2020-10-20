#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    char ch;
    while (t--)
    {
        cin >> ch;
        if (ch == 'B' || ch == 'b')
        {
            cout << "BattleShip"
                 << "\n";
        }
        else if (ch == 'C' || ch == 'c')
        {
            cout << "Cruiser"
                 << "\n";
        }
        else if (ch == 'D' || ch == 'd')
        {
            cout << "Destroyer"
                 << "\n";
        }
        else
        {
            cout << "Frigate"
                 << "\n";
        }
    }
    return 0;
}