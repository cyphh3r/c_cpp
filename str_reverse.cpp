#include <bits/stdc++.h>
using namespace std;

int gcd_fun(int num1, int num2)
{
    // int gcd = 1;
    int j = min(num1, num2);

    for (int i = j; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            return i;
        }
    }
    return 1;
}



int main()
{
    int gcd = gcd_fun(16, 20);
    cout << gcd;
}