/*Given an array A[]  of n elements. Your task is to complete the Function num which returns an integer denoting the total number of times digit k appears in the whole array.

For Example:

A[]={11,12,13,14,15}, k=1

Output=6 //Count of the digit 1 in the array


Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. The first line of each test case contain an integer n denoting the size of the array A[]. Then in the second line are n space separated values of the array A[] .In the third line of each test case contains an integer k, which is the digit to be counted.
 

Output:
For each test case in a new line print the number of elements counted.
 

Constraints:
1<=T<=100
1<=n<=20
1<=A[]<=1000
 

Example(To be used for expected output):
Input:
2
5
11 12 13 14 15 
1
4
0 10 20 30
0

Output:
6
4
*/

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
