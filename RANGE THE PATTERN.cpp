//PROGRAM TO PRINT RIGHT ANGLE TRIANGLE STRICKS OF GIVEN SIZE.
#include<iostream>
using namespace std;
int main()
{
	int i,j,s;
	cout<<"ENTER THE NUMBER OF PATTERN"<<endl;
	cin>>s;
	for(i=1;i<=s;i++)
	 {
	 	for(j=1;j<=i;j++)
	 	{
	 		cout<<"* ";
	 		
	 	}
	 	cout<<endl;
	 }
	 
	 return 0;
	 
}
