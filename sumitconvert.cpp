/* WRITE A PROGRAM TO REPLACE 0 IN NUMBER WITH 5 IN C++.
 SUMIT KUMAR */
#include<iostream>
using namespace std;
int main()
{
    int sumit=1,i ,n, T;
    int result=0;
    cin>>T;
    for(i=1;i<=T;i++)
    {
	    cin>>n;
	    result=0;
	    sumit=1;
    	for(;n>0;)
    	{
    	      if(n%10==0)
        {
            result=result+5*sumit;
            sumit=sumit*10;
        }
        else{
            result=result+(n%10)*sumit;
            sumit=sumit*10;
        }
        n=n/10;
    }
    cout<<result<<endl;
	}
    
}
