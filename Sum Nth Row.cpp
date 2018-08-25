/* Write a c++ program Sum Terms Nth Row.
  Given a series as shown below:
               1  2
            3  4  5  6
        7  8  9 10 11 12
     13 14 15 16 17 18 19 20
    ..........................
    ............................
             (so on)

You are given a number N, you need to write a program to find the sum of all elements in the N-th row of above series.
Example:
Input:
2
2
4
Output:
18
132

 SUMIT KUMAR */

#include<iostream>
using namespace std;
int main()
 {
	int t,i,n,m;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	 {
	    cin>>n;
	    m=((2*n*n)+1)*n;
	    cout<<m<<endl;
	}
	return 0;
}
