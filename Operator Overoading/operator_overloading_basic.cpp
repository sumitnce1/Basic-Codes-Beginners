#include <iostream>
using namespace std;

class Test
{
   private:
      int count;

   public:
       Test(): count(5){}

       void operator --()
       {
          count = count+1;
       }
       void Display() { cout<<"Count: "<<count; }
};

int main()
{
    Test t,t1;
    // this calls "function void operator ++()" function
    --t;
    --t1;
    t.Display();
    t1.Display();
    return 0;
}
