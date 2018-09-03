/* write a c++ program power of 2.<gfg>
Given a positive integer N, check if N is a power of 2.
Input:
The first line contains 'T' denoting the number of test cases. Then follows description of test cases.
Each test case contains a single positive integer N.
Output:
Print "YES" if it is a power of 2 else "NO". (Without the double quotes)
Constraints:
1<=T<=100
0<=N<=10^18
Example:
Input :
2
1
98
Output :
YES
?NO
Explanation:  (2^0 == 1) 
 SUMIT KUMAR */
 
#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if(n>0)
        {
          while(n%2==0)
           n=n/2;
          if(n==1)
           cout<<"YES"<<endl;
        }
        if(n==0||n!=1)
           cout<<"NO"<<endl;
    }
    return 0;
}
