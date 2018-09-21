
#include<bits/stdc++.h>
using namespace std;
void addFraction(int num1, int den1, int num2,
                 int den2);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);
    }
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this function*/
void addFraction(int num1, int den1, int num2,int den2)
{
int s,u,m,t;
s=(num1*den2+num2*den1);
u=(den1*den2);
m=s/u;
for(t=s<u?s:u;t>=1;t--)
{
    if(s%t==0 && u%t==0)
    break;
}
cout<<s/t<<"/"<<u/t<<endl;

 }
