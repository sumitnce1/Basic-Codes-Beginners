#include<iostream>
using namespace std;
bool ishappyNo(int n)
{
    if(n==1)
     return true;
    else if(n>9)
    {
        int sum=0;
        while(n!=0)
        {
            int x=n%10;
            sum+=(x*x);
            n=n/10;
        }
        if(ishappyNo(sum))
         return true;
        else
         return false; 
    }
    return false;
}
void nextsmallest(int n)
{
    int i=n+1;
    
    while(true)
    {
        if(ishappyNo(i)==true)
        {
            cout<<i;
            break;
        }
        i++;
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    nextsmallest(n);
	    cout<<endl;
	}
	return 0;
}
