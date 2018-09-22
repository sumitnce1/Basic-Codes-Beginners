#include<iostream>
using namespace std;
int isTriangle(int, int, int);
int main()
{
	int s;
	cin>>s;
	while(s--)
	{
		int n,i,j,k,l;
		int sum=0, maxperime=0, value=0;
		cin>>n;
		int ar[n];
		for(l=0;l<n;l++)
		cin>>ar[l];
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				for(k=j+1;k<n;k++)
				{
					value=isTriangle(ar[i], ar[j], ar[k]);
					if(value==1)
					sum=ar[i]+ar[j]+ar[k];
					if(sum>maxperime)
					maxperime=sum;
				}
			}
		}
		if(maxperime)
		cout<<maxperime<<endl;
		else
		cout<<"-1"<<endl;
	}
	return 0;
}
int isTriangle(int a,int b, int c)
{
	if((a+b>c)&&(b+c>a)&&(c+a>b))
	return 1;
	return 0;
}
