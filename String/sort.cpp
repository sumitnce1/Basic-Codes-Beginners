#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char *arr[]={"white","red","green","yellow","blue"};
    int i,j;
    char *temp;
    cout<<"before sorting"<<endl;
    for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<5;j++)
                {
                    if(arr[i]>arr[j])
                    {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }
        }
    cout<<"After sorting";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
