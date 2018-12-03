#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t>0)
	{
	    int d,m,y;
	    cin>>d>>m>>y;
	    int a[]={0,3,2,5,0,3,5,1,4,6,2,4};
	    int i;
	    y-=m<3;
	    int ans=(y+y/4-y/100+y/400+a[m-1]+d)%7;
	    if(ans==0)
	    cout<<"Sunday"<<endl;
	    if(ans==1)
	    cout<<"Monday"<<endl;
	    if(ans==2)
	    cout<<"Tuesday"<<endl;
	    if(ans==3)
	    cout<<"Wednesday"<<endl;
	    if(ans==4)
	    cout<<"Thursday"<<endl;
	    if(ans==5)
	    cout<<"Friday"<<endl;
	    if(ans==6)
	    cout<<"Saturday"<<endl;
	    t--;
	}
	return 0;
}
https://practice.geeksforgeeks.org/problems/day-of-the-week/0
