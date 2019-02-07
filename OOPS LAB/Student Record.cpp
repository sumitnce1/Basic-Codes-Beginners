#include<iostream>
using namespace std;
class student
{
	public:
		int Roll;
		char Name[20], Branch[15];
		void getdetails(void);
		void putdetails(void);
		
};
void student::getdetails()
{
	cout<<"Enter Name: ";
	cin>>Name;
	cout<<"Enter Roll: ";
	cin>>Roll;
	cout<<"Enter Branch: ";
	cin>>Branch;
}
void student::putdetails()
{
	cout<<"Student details:\n";
	cout<<"Name:- "<<Name<<endl<<"Roll No:- 0"<<Roll<<endl<<"Branch:- "<<Branch<<endl;
}
int main()
{
	for(int i=0;i<5;i++)
	{
		student std;
		std.getdetails();
		std.putdetails();
		
	}
	return 0;
}

