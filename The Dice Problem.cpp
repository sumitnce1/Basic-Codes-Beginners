/* Write a c++ program The Dice problem.
 SUMIT KUMAR
 */
#include<iostream>
using namespace std;
int main()
 {
	 int t,s;
	 cin>>t;
	 	 while(t>0)
	 {
	     cin>>s;
	     switch(s)
	     {
	         case 1 : cout<<"6"<<endl;
	                    break;
	         
	         case 2 : cout<<"5"<<endl;
	                    break;
	         
	         case 3 : cout<<"4"<<endl;
	                    break;
	         
	         case 4 : cout<<"3"<<endl;
	                    break;
	         
	         case 5 : cout<<"2"<<endl;
	                    break;
	         
	         case 6 : cout<<"1"<<endl;
	                    break;
	     }
	     t--;
	 }
	 	return 0;
}
