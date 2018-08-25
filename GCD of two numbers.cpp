/* write a c++ program GCD of two numbers.
 SUMIT KUMAR
 */
#include<iostream>
using namespace std;
int main()
{
    int T,j,s,u,i,m;
    cin>>T;
    for(j=0;j<T;j++)
     {
        cin>>s>>u;
        for(i=1;i<=s&&i<=u;i++)
         {
          if(s%i==0&&u%i==0)
          m=i;
      	 }
      cout<<m<<endl;
     }
    return 0;
}
