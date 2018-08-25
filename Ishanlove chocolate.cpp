/* Write a c++ program ishan love chocolate.
  Q. As we know, Ishaan has a love for chocolates. He has bought a huge chocolate bar which contains N chocolate squares. Each of the square has a tastiness level which is denoted by an array A[].
Ishaan can eat the first or the last square of the chocolate at once. Ishaan has a sister who loves chocolates too and she demands the last chocolate square. Now, Ishaan being greedy eats the more tasty square first. 
Determine the tastiness level of the square which his sister gets.
	Example : 
Input : 
3
5
5 3 1 6 9
6
2 6 4 8 1 6
4
2 2 2 2
Output : 
1
1
2
 SUMIT KUMAR
 */
 
#include<iostream>
using namespace std;
int main()
 {
	int T, N, max,i;
	cin>>T;
	while(T)
	{
		cin>>N;
		int arr[N];
		max=1000;
		for(i=0;i<N;i++)
		 {
		  cin>>arr[i];
		  if(arr[i]<max)
			max=arr[i];
		 }
			cout<<max<<endl;
			T--;
	}
	return 0;
}
