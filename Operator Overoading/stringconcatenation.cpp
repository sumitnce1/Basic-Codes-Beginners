#include<iostream>
#include<string.h>
using namespace std;
const int BUFF_SIZE=50;
class String
{
private:
    char str[BUFF_SIZE];
public:
    String()
    {
        strcpy(str," ");
    }
    String(char *MyStr)
    {
        strcpy(str,MyStr);
    }
    void echo()
    {
        cout<<str;

    }
    String operator +(String s)
    {
        String temp=str;
        strcat(temp.str,s.str);
        return temp;
    }
};
int main()
{
    String str1="Welcome to  ";
    String str2="Operator Overloading";
    String str3;
    cout<<"\n Before str3=str1+str2  :";
    cout<<"\n str1  :";
    str1.echo();
    cout<<"\n str2 = :";
    str2.echo();
    str3=str1+str2;
    cout<<"\n After str3 =s tr1+str2  ";
    cout<<"\nstr1   :";
    str1.echo();
    cout<<"\n str2   :";
    str2.echo();
    cout<<"\n str3= ";
    str3.echo();
    return 1;
}
