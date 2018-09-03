/* write a program Print first n fibonacci Numbers.<GFG>
Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case contains the integer N.
Output:
Print the first n fibonacci numbers with a space between each number. Print the answer for each test case in a new line.
Constraints:
1<= T <=100
1<= N <=100
Example:
Input:
1
7
Output:
1 1 2 3 5 8 13
// SUMIT KUMAR */

#include<iostream>
using namespace std;
int main()
{ 
    int t; 
    cin>>t;
    while(t--)
    {
       int t1=0, t2=1, t3=1,n,i=0;
       cin>>n;
        while(i<n)
        {
    	    cout<<t3<<" ";
            t3 = t1+t2;
            t1=t2;
            t2=t3;
            i++;
        }
        cout<<endl;
    }
    return 0;
}
