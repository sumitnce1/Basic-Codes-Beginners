#include<iostream>
#include<string.h>
using namespace std;
void test(char *p)
{
    int i=0;
    while(p[i]!='\0')
    {
        cout<<p[i];
        i=i+1;
    }
    cout<<"\n";
}
int main()
{
   char ch[50];
   cin>>ch;
   test(ch);
   return 1;

}
