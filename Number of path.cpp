#include<iostream>
using namespace std;
int path(int x, int y)
 {
	if(x==1 || y==1)
	return 1;
	else
	return path(x-1,y)+path(x,y-1);
 }
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int a,b;
         cin>>a>>b;
         cout<<path(a,b)<<endl;
     }
	return 0;
}
