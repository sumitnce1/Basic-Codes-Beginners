/* Write a c++ program Replace all0's with 5.
 SUMIT KUMAR
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.
you are required to complete this method*/

int convertFive(int n)
{
    int sum=0;
    int value=0;
  while(n!=0)
  {
    int s=n%10;
      if(s==0)
      {
          s=5;
      }
      sum=(sum*10)+s;
      n=n/10;
  }
   while(sum!=0)
  {
      int s=sum%10;
      if(s==0)
      {
          s=5;
      }
      value=(value*10)+s;
      sum=sum/10;
  }
  return value;
}
