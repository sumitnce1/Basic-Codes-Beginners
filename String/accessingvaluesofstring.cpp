
#include <iostream>
using namespace std;
int main() {

  // array of pointers
  char *cityPtr[4] = {
    "Chennai",
    "Kolkata",
    "Mumbai",
    "New Delhi"
  };

  // temporary variable
  int r, c;

  // print cities
  for (r = 0; r < 4; r++) {
    c = 0;
    while(*(cityPtr[r] + c) != '\0') {
      cout<<*(cityPtr[r] + c);
      c++;
    }
    cout<<endl;
  }

  return 0;
}
