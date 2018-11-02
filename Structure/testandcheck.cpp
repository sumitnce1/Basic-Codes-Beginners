#include<iostream>
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
 if(*(fruit+2)<*(fruit+1))
 {
     cout<<"everything is not ok";
 }
 if('a'<'b')
 {
     cout<<"everything is ok";
 }

 return 1;
}
