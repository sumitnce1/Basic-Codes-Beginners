#include<iostream>
#include <stdio.h>
#include<string.h>
using namespace std;
int main()
{
 char *fruit[] = {
 "apricot",
 "banana",
 "pineapple",
 "apple",
 "persimmon",
 "pear",
 "blueberry"
 };
 char *temp;
 int a,b,x;

 for(a=0;a<6;a++)
 {   //cout<<a<<"-----"<<b<<endl;
for(b=a+1;b<7;b++)
 {

 cout<<*(fruit+a)<<"---"<<a<<"----"<<b<<"--------------"<<*(fruit+b)<<endl;
 if((*(fruit+a)< *(fruit+b)))
 {
 temp = *(fruit+a);
 *(fruit+a) = *(fruit+b);
 *(fruit+b) = temp;

 cout<<*(fruit+a)<<"------"<<*(fruit+b)<<"--------"<<temp;
 }
 }
 }
 for(x=0;x<7;x++)
 puts(fruit[x]);
 return(0);
}
