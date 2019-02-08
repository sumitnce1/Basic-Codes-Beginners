#include <bits/stdc++.h>

using namespace std;

int BinToDec(long long);

int main()
{
    long long n;

    cout << "Enter a binary number: ";
    cin >> n;
 
    cout << "The decimal number = " <<BinToDec(n) ;
    return 0;
}

int BinToDec(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
