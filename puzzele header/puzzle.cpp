#include"sumittwo.h"
int main()
{
    int a,b,x,y,s,u,m,i;
    cout<<"ENTER INITIAL VALUSE OF A & B:- ";
    cin>>a>>b;
    cout<<"ENTER DESTINATION VALUSE OF X & Y :- ";
    cin>>x>>y;
    s=x-a; u=y-b; m=s+u;
    i=fact(m)/(fact(s)*fact(u));
    cout<<"THE NUMBER OF WAYS FROM INITIAL TO DESTINATION POINT IS: "<<i;
    return 0;
          
}