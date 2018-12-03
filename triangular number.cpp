using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0,i=1,flag=0;
        while(sum<n)
        {
            sum=sum+i;
            i++;
            if(sum==n)
            {
                flag=1;
                break;
            }
        }
        cout<<flag<<"\n";
    }
	return 0;
}
