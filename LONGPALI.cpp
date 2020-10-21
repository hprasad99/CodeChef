//https://www.codechef.com/IARCSJUD/problems/LONGPALI
#include <bits/stdc++.h>
using namespace std;
void printStr(char *str, int low, int high)
{
    for (int i = low; i <= high; ++i)
    {
        cout << str[i];
    }
    cout << "\n";
}
void longStr(char *str)
{
    int maxlength = 1;
    int start = 0;
    int len = strlen(str);
    int low, high;
    for (int i = 1; i < len; ++i)
    {
        low = i - 1;
        high = i;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if (high - low + 1 > maxlength)
            {
                start = low;
                maxlength = high - low + 1;
            }
            --low;
            ++high;
        }
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if (high - low + 1 > maxlength)
            {
                start = low;
                maxlength = high - low + 1;
            }
            --low;
            ++high;
        }
    }
    cout << maxlength << "\n";
    printStr(str, start, start + maxlength - 1);
}

int main()
{
    int l;
    cin >> l;
    char str[l];
    for (int i = 0; i < l; i++)
    {
        cin >> str[i];
    }
    longStr(str);
    return 0;
}