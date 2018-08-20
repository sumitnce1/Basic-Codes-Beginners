//WRITE THE PROGRAM TO FIND OUT WHETHER GIVEN NUMBER IS PALINDROME OR NOT.
//SUMIT KUMAR
#include<iostream>
using namespace std;
int main()
{
	int n,s,u,m;
	cout<<"ENTER A NUMBER"<<endl;
	cin>>n;
	s=n;
	m=0;
	while(s!=0)
	 {
	 	u=s%10;
	 	m=(m*10)+u;
	 	s=s/10;
	 	
	 }
	 if(m==n)
	 {
	 	cout<<"PALINDROME NUMBER"<<endl;
	 	
	 }
	 else
	 cout<<"NOT A PALINDROME NUMBER";
	
	return 0;
		 
}

