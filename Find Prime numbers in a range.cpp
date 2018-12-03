using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
     int i,j,l,r;
     cin>>l>>r;
     if(l==1)
     {
        l=l+1;
     }
     else
        l=l;

     for(i=l;i<=r;i++)
     {
         for(j=2;j<=i;j++)
         {
             if(i==j)
                cout<<i<<" ";
             else if(i%j==0&&i!=j)
                break;
             else
                ;
         }
     }
     cout<<endl;
     t--;
    }
     return 0;
}

