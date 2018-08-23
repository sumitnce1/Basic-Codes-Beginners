/* write a c++ program C++ Switch Case Statement.
Given  a number as input, if the number is between 1 and 10 both inclusive then print the number in words otherwise print "not in range".
Input: 
First line of input contains an integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains an integer N.
Output:  
For each test case, if the number is between 1 and 10 both inclusive then print the number in words in small cases otherwise print "not in range" 
Constraints:
1<=T<=1000
1<=N<=100
Example:
Input:
5
5
6
12
2
10
Output:
five
six
not in range
two
ten
 *SUMIT KUMAR*
 */
#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >>T;
	for(int i=0;i<T;i++){
	    int n;
	    cin >>n;
	    switch(n)
		{
	        case 1: cout <<"one"<<endl;
	        break;
	        case 2: cout << "two" <<endl;
	        break;
	        case 3: cout <<"three"<<endl;
	        break;
	        case 4: cout <<"four"<<endl;
	        break;
	        case 5: cout <<"five"<<endl;
	        break;
	        case 6: cout <<"six"<<endl;
	        break;
	        case 7: cout <<"seven"<<endl;
	        break;
	        case 8: cout <<"eight"<<endl;
	        break;
	        case 9: cout <<"nine"<<endl;
	        break;
	        case 10: cout <<"ten"<<endl;
	        break;
	        default : cout <<"not in range"<<endl;
	    }    
	}
	return 0;
}
