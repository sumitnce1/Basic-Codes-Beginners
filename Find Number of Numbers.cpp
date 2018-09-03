
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function given below*/
int num(int a[], int n, int k)
{
	int i,s,m; 
     s=0;

    for(i=0;i<n;i++)
    {

        while(a[i]!=0)
        {
          m=a[i]%10;
        if(m==k)
         {
           s++;
         }
         a[i]=a[i]/10;
        }
    }
    return s;
}
