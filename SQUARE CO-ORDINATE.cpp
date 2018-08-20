//GIVEN FOUR POINTS (X1Y1)(X2Y2)(X3Y3)(X4Y4) FIND OUT WHETHER SQUARE CAN BE ALLOW USING THIS FOUR POINTS. WRITE A PROGRAM TO SOLVE IT.
//SUMIT KUMAR
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4,s1,u2,m3,i4,t5,s8;
	cout<<"ENTER FIRST CO-ORDINATE"<<endl;
	cin>>x1>>y1;
	cout<<"ENTER SECOND CO-ORDINATE"<<endl;
	cin>>x1>>y2;
	cout<<"ENTER THIRD CO-ORDINATE"<<endl;
	cin>>x3>>y3;
	cout<<"ENTER FOURTH CO-ORDINATE"<<endl;
	cin>>x4>>y4;
	
	s1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	u2=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
	m3=sqrt(pow(x4-x3,2)+pow(y4-y1,2));
	i4=sqrt(pow(x1-x4,2)+pow(y1-y4,2));
	t5=sqrt(pow(x4-x2,2)+pow(y4-y2,2));
	s8=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	
	if(s1==u2&&u2==m3&&m3==i4 && t5==s8)
	cout<<"POINT ENTRED ARE SQUARE";
	else
	cout<<"POINT ARE NOT SQUARE"<<endl;
	return 0;
	
}
