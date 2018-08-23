//  Write a c++ program Vowel or a consonant Manually.
// SUMIT KUMAR
#include<iostream>
using namespace std;
int main()
{
	char s;
	int isLowerVowel , isUpperVowel;
	cout<<" ENTER AN ALPHABET:- ";
	cin>>s;
	isLowerVowel=(s=='a'||s=='e'||s=='i'||s=='o'||s=='u');
	isUpperVowel=(s=='A'||s=='E'||s=='I'||s=='O'||s=='U');
	 if(isLowerVowel||isUpperVowel)
	  cout<<s<<" :-IS A VOWEL."<<endl;
	 else
	  cout<<s<<" :-IS A CONSONANT."<<endl;
	  return 0;
}
