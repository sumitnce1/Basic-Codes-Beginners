/*Given a number N. You need to write a program to count the number of digits in N which evenly divides N.
Input:
First line of input contains an integer T which denotes the number of test cases. T test cases follows. First line of each test case contains a single integer N.
Output:
For each test case in a new line print the total number of digits of N which evenly divides N.
Constraints:
1<=T<=200
1<=N<=10^5
Example:
Input:
3
12
1012
23
Output:
2
3
0 */

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=0,remainder,number;
        cin>>number;
        n=number;
        while(n!=0)
        {
            remainder=n%10;
            if(remainder!=0)
            {
                if(number%remainder==0)
                    i+=1;
            }
              n/=10;
        }
        cout<<i<<endl;
    }
    return 0;
}

