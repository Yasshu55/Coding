//objects as arguments
#include<iostream>
using namespace std;
class data
{
int a,b;
public:
void get();
void show();

data sum(data a1,data a2)
{
data a3;
a3.a=a1.a+a2.a;
a3.b=a1.b+a2.b;
return(a3);
}
};
int main()
{
data a,b,c;
a.get();
b.get();
c=a.sum(a,b);
c.show();
}
void data::get()
{
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
}
void data::show()
{
cout<<"A="<<a<<"\n";
cout<<"B="<<b<<"\n";
}
