//PROGRAM THE TRANSPOSE OF MATRIX:
//SUMIT KUMAR
#include<iostream>
using namespace std;
int main()
{
	int A[3][3],B[3][3],i,j, transpose;
	 cout<<"Enter 9 numbers for A matrix:-"<<endl;
	for(i=0;i<=2;i++)
	{
	
	  for(j=0;j<=2;j++)
	  cin>>A[i][j];
}
	cout<<"Transpose of matrix A:-";
	  cout<<endl;
	  	for(i=0;i<=2;i++)
	  	{
		  for(j=0;j<=2;j++)
	      {   
	        B[i][j]=A[j][i];
		 }
	}
		     for(i=0;i<=2;i++)
		  {
		  	for(j=0;j<=2;j++)
			    
	          cout<<B[i][j]<<"  ";
	          cout<<endl;
          }
          return 0;
}






