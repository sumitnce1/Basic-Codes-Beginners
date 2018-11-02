using namespace std;
class Test
{
public:
    static int public_int;
private:
    static int private_int;
};
int main()
{
    Test::public_int=145;
   // Test::private_int=112;
    Test myobj;
    myobj.public_int=145;
   // myobj.private_int=12;
    return 1;
}

