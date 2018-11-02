#include<iostream>
using namespace std;
class Level1
{
  public:
      int x;
  protected:
    int y;
  private:
   // int z;
};
class Level2:protected Level1
{
    public:
    void print()
    {
        cout<<x<<"------------"<<y<<"...................";
    }
};
class Level3:public Level2
{
    public:
    void print()
    {
        cout<<x<<"--------------"<<y<<"---------------------";
    }

};
int main()
{
    Level3 l3;
    l3.print();
    Level2 l2;
    l2.print();
    return 1;
}
