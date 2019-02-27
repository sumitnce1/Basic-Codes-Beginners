#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int T,i;
	string s;
	cin>>T;
	if((T>=1) && (T<=100))
	{
	    for(i=0;i<T;i++)
	    {
	        cin>>s;
	        if(s[0]>='0' && s[0]<='9')
	        {
	            if(s.length()>7)
	                    cout<<8<<endl;
	            else 
	                    cout<<4<<endl;
	        }
	        else
	                    cout<<1<<endl;
	    }
	}
	return 0;
}
