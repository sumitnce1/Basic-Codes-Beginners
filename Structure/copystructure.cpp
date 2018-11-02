#include <iostream>
#include <cstring>

using namespace std;

struct student
{
  int roll_no;
  string name;
  int phone_number;
};

int main(){

	struct student p1 = {1,"Brown",123443};
  	struct student p2;
  	p2 = p1;

  	cout << "roll no : " << p2.roll_no << endl;
  	cout << "name : " << p2.name << endl;
  	cout << "phone number : " << p2.phone_number << endl;
	return 0;
}
