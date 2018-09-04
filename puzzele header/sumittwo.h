#include<iostream>
using namespace std;
int fact(int n)
{
    int f;
    if(n==0)
    return 1;
    else
    f=n*fact(n-1);
    return f;

}