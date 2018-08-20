//write a program in cpp Reverse an array
//SUMIT KUMAR
#include<iostream>
using namespace std;
int main() 
{
  int s;
  cout<<"ENTER THE USER START INTPUT NUMBER:-";
  cin>>s;
   while(s--)
	{
	 int n;
	 cout<<"ENTER THE USER LAST INTPUT NUMBER:-";
	 cin>>n;
	 int a[n];
	  for(int i=0;i<n;i++)
	   {
	    cout<<"ENTER THE PRESS NEXT NUMBER:-";
		cin>>a[i];
	   }
	  for(int i=n-1;i>=0;i--)
	   {
		 cout<<a[i]<<" ";
	   }
	    cout<<endl;  
	}
	return 0;
}
