#include<iostream>
using namespace std;
int find_pos(int N)
 {
  int r;
  for(int i=N;i>=1;i--)
  {
   if((i & (i-1))==0)
   {
       r=i;
       break;
   }
  }
  return r;
 }
 int main()
 {
     int t,n;
     cin>>t;
     while(t--)
     {
         cin>>n;
         cout<<find_pos(n)<<endl;
     }
	return 0;
}
