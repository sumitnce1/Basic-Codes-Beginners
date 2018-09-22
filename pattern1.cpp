#include<iostream>
using namespace std;
int main()
{
   int s;
   cin>>s;
   while(s--)
   {
       int n,i,j;
       char ch='A';
	    cin>>n;
	    for(i=0;i<n;i++)
	    { 
	        for(j=0;j<n;j++)
	      {    
	        if(i==0 || i==n-1)
	        {
	            cout << (char)ch;
	            ch++;
	        }
	        else if(j==0 || j==n-1)
	        {
	            cout <<(char)ch;
	            ch++;
	        }
	        else
	        {
	            cout <<'$';
	        }
	      }
	    cout<<endl;
	   }
	}
	return 0;
}
