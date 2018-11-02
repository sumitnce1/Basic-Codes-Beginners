#include <iostream>
using namespace std;
int main() {

  // string variable
  char str[6] = "Hello";

  // pointer variable
  char *ptr = str;
int i=0;
  // print the string
  while(*ptr != '\0') {
    cout<<(int)(ptr[i])<<"----"<<*(ptr+i)<<"-----"<<*ptr<<endl;

    // move the ptr pointer to the next memory location
    ptr++;
  }

  return 0;
}
