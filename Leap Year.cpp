//write a program in c++ leap year Yes or No.
//SUMIT KUMAR
#include<iostream>
using namespace std;
int main()
 {
     int s;
     cin>>s;
     while(s--)
     {
         int n;
         cin>>n;
         if((n%100!=0&&n%4==0)||n%400==0)
         cout<<"Yes"<<endl;
         else
         cout<<"No"<<endl;
     }
	    return 0;
 }
