/* 
Given a number n, Write a program that generates and prints all binary numbers with decimal values from 1 to n.
Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N.
Output:
Print all binary numbers with decimal values from 1 to n in a single line.
Constraints:
1 = T = 100
1 = N = 500
Example:
Input
2
2
5
Output
1 10
1 10 11 100 101
*/
#include<iostream>
using namespace std;
void printbinary(long long int n)
{
    long long int a=1,binary=0;
    long long int rem;
    while(n>0)
    {
        rem=n%2;
        binary=binary+rem*a;
        a=a*10;
        n=n/2;
    }
    cout<<binary;
}
int main()
{
    int T,i;
    cin>>T;
    while(T--)
    {
        long long int i,num;
        cin>>num;
        for(i=1;i<=num;i++)
        {
            printbinary(i);
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
