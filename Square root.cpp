/*
Given an integer x , Your task is to find the  square root of it. If x is not a perfect square, then return floor(vx)
Input:
You have to complete the method which takes 1 argument: the integer N. You should not read any input from stdin/console. There are multiple test cases. For each test cases, this method will be called individually.
Output:
Your function should return square root of given integer.
Constraints:
1 = T = 1000
1 = N = 1000000
Example:
Input
2
5
4
Output
2
2
SUMIT KUMAR */

#include<bits/stdc++.h>
using namespace std;
long long int floorSqrt(long long int x);
  
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << floorSqrt(n) << endl;
	}
    return 0;   
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete
this function*/
long long int floorSqrt(long long int x) 
{
  int s=1;
   while(s*s<=x)
   {
       s++;
   }
   return s-1; 
}
