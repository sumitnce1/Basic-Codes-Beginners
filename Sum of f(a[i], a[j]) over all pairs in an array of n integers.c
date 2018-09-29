#include<stdio.h>
int main()
 {
	int t,s,i,j,A[50];
	int sum;
	scanf("%d", &t);
		while(t--)
	   {
	    sum = 0;
	    scanf("%d",&s);
	    for(i=0;i<s;i++)
	    {
	        scanf("%d",&A[i]);
	    }
	    for(i=0;i<s-1;i++)
	    {
	        for(j=i+1;j<s;j++)
	        {
	            if((A[j]-A[i])>1||(A[j]-A[i])<-1)
	            {
	                sum+=(A[j]-A[i]);
	            }
            }
	    }

	    printf("%d\n", sum);
	}
	return 0;
}
