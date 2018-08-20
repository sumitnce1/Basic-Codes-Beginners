//PROGRAM THE GIVEN MATRIX MULTIPLICATION:
//SUMIT KUMAR
#include<iostream>
using namespace std;
int main()
{
	int A[3][3]  , B[3][3]  , C[3][3]  , i , j ,k ;
	   cout<<"Enter 9 numbers for A matrix:-"<<endl;
	for(i=0;i<=2;i++)
	{
	   for(j=0;j<=2;j++)
	   cin>>A[i][j];
    }  
        cout<<"Enter 9 numbers for B matrix:-"<<endl;
         for(i=0;i<=2;i++)
	  	{
		  
	     for(j=0;j<=2;j++)
	     cin>>B[i][j];
	    }
	    
	     for(i=0;i<=2;i++)
	     {
		  for(j=0;j<=2;j++)
		  {
		 int sum=0;
		  	  for(k=0;k<=2;k++)
		           sum=sum+A[i][k]*B[k][j];
	
	                 C[i][j]=sum;
          }
	    }
	       for(i=0;i<=2;i++)
	     {
		  for(j=0;j<=2;j++)
	          cout<<C[i][j]<<" ";
	          cout<<endl;
	      }
	  	return 0;

}
