#include<bits/stdc++.h>
using namespace std;
char result[10000];
void add(string str1, string str2)
{
	int j=0,carry=0,sum=0,i;
	int len1=str1.size();
	int len2=str2.size();
	for(i=0;i<len1 && i<len2;i++)
	{
		sum=(str1[i]-'0')+(str2[i]-'0')+carry;
		result[j++]='0'+sum%10;
		carry=sum/10;
	}
	while(i<len1)
	{
		sum=(str1[i]-'0')+carry;
		result[j++]='0'+sum%10;
		carry=sum/10;
		i++;
	}
	while(i<len2)
	{
		sum=(str2[i]-'0')+carry;
		result[j++]='0'+sum%10;
		carry=sum/10;
		i++;
	}
	if(carry)
	{
	 result[j++]='0'+carry;
	}

}
string rev(string a)
{
	string b=a;
	for(int i=0;i<a.size();i++)
	{
		b[a.size()-1-i]=a[i];
	}
	return b;
}
int main()
{
string a,b;
cin>>a>>b;
string reva= rev(a);
string revb= rev(b);
add(reva, revb);
cout<<"Addition of two strings: ";
for(int i=strlen(result);i>=0;i--)
{
	cout<<result[i];
}
return 0;
}
