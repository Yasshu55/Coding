//static data members
#include<iostream>
using namespace std;
class item
{
static int count;
int number;
public:
void getdata(int n)
{
int a;
count++;
}
void getcount()
{
cout<<"count"<<count<<endl;
}
};
int item::count;
int main()
{
item a,b;
a.getcount();
b.getcount();
a.getdata(10);
b.getdata(20);
cout<<"after reading data";
a.getcount();
b.getcount();
return 0;
}
