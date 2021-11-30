//static member functions
#include<iostream>
using namespace std;
class test
{
static int x,y;
public:
static void check(int a,int b)
{
if(a>b)cout<<"a is big";
else if(a<b)cout<<"b is big";
else cout<<"both are equal";
}
};
int test::x;
int test::y;
int main()
{
test t1;
t1.check(55,10);
t1.check(15,50);
t1.check(5,5);
return 0;
}
