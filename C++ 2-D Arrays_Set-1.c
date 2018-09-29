#include<stdio.h>
int main()
{
    int T,N,i,j;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        int arr[N][N];
          for(i=0;i<N;i++)
          {
            for(j=0;j<N;j++)
             {
                scanf("%d",&arr[i][j]);
             }
          }
             for(i=0;i<N;i++)
              {
                for(j=0;j<N;j++)
                 {
                   printf("%d ",arr[j][i]);
                 }

              }
        printf("\n");
    }
    return 0;
}
