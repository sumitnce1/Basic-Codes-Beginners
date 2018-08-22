//PROGRAM GIVEN THE PATTERN :-   *
//                              ***
//                             *****
//                              ***
//                               * 
//SUMIT KUMAR
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		if(i<=3)
		k++;
		else
		k--;
	     for(j=1;j<=5;j++)
	     {
	
	        if(j>=4-k&& j<=2+k)
	          cout<<"*";
	        else
	          cout<<" ";
          }
          cout<<endl;
      }
      return 0;	   
}