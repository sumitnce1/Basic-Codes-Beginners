#include <iostream>
using namespace std;

enum week { Sunday='A', Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Sunday;
    cout << "Day " << (char)(today+1);
    return 0;
}
