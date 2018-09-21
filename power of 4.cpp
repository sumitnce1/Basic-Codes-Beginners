
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/
#include<iostream>
using namespace std;
int isPowerOfFour(unsigned int n)
{
   if(n>0)
   {
       while(n%4==0)
       n=n/4;
       if(n==1)
       return 1;
   }
   if(n==0||n!=1)
   return 0;
}
