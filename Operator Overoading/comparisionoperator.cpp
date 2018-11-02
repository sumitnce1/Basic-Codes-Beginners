#include<iostream>
#include<string>
using namespace std;
enum boolean{FALSE,TRUE};
class Index
{
private:
    int value;
public:
    Index()
    {
        value=0;
    }
    Index(int val)
    {
        value=val;
    }
    int GetIndex()
    {
        return value;
    }
    boolean operator<(Index idx)
    {
        return (value<idx.value?TRUE:FALSE);
    }
};
int main()
{
    Index idx1=5;
    Index idx2=10;
    cout<<"\nIndex1 =  "<<idx1.GetIndex();
    cout<<"\nIndex2 =  "<<idx2.GetIndex();
    if(idx1<idx2)
    {
        cout<<"\n Index1 is less than Index2";
    }
    else
    {
     cout<<"\n Index1 is not less than Index2";
    }
    return 1;
}
