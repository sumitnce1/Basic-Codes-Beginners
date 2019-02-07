#include<bits/stdc++.h>
using namespace std;
int fact (int x)
{
	int factorial=1;
	for(int i=1;i<=x;i++)
	{
		factorial*=i;
	}
	return factorial;
}

	int main()
	
{
int n,r;
cin>>n>>r;
int rfact=fact(r);
int nfact=fact(n);
int n_rfact=fact(n-r);
int result=nfact/((rfact)*(n_rfact));
cout<<"RESULT IS ="<<result;
}

