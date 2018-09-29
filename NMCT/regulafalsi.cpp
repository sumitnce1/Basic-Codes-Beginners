#include<stdio.h>
#include<math.h>
#define MAX_ITR 10000
double func(double x)
{
    return x*x*x-x*x+2;
}
void regfalsi(double a, double b)
{
    if(func(a)*func(b)>=0)
    {
        printf("You have entered wrong value of a and b.");
        return;
    }
    double c;
    for(int i=1;i<MAX_ITR;i++)
    {
        c=((a*func (b))-(b*func(a)))/(func(b)-func(a));
        if(func(c)==0)
        {
            break;
        }
        else if(func(c)*func(a)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
    }
    printf("Root is %lf",c);
}

int main()
{
    double a, b;
    printf("Enter the value of intervals a and b: ");
    scanf("%lf %lf", &a, &b);
    regfalsi(a,b);
    return 0;
}
