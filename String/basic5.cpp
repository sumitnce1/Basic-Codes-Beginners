#include <iostream>
using namespace std;

void display(char s[]);


int main()
{
    char str[100];
    string str1;

    cout << "Enter a string: ";
    cin.get(str, 100);

    cout << "Enter another string: ";
    getline(cin, str1);

    display(str);
//    display(str1);

    return 0;
}

void display(char s[])
{
    cout << "You entered char array: " << s ;
}

