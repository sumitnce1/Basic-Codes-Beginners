/* write a c++ program Palindrome.
Given an integer, check whether it is a palindrome or not.
Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line. The first line of each test case contains a single integer N to be checked for palindrome.
Output:
Print "Yes" or "No" (without quotes) depending on whether the number is palindrome or not.
Constraints:
1 <= T <= 1000
1 <= N <= 10000
Example:
Input:
3
6
167
55555
Output:
Yes
No
Yes
 *SUMIT KUMAR*
 */
#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
	{
   		int i,temp,d,revrs=0;
 		cin>>i;
    	temp=i;
    while(temp>0)
     {
        d=temp%10;
        temp/=10;
        revrs=revrs*10+d;
     }
    if(revrs==i)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
 	}
return 0;
}
