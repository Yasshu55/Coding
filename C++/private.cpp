//private member funtions
#include<iostream>
using namespace std;
class sample
{
int m;
void read(void);
public:
void update(void);
void write(void);
};
void sample::update(void)
{
read();
}
void sample::read(void)
{
cin>>m;
}
void sample::write(void)
{
cout<<"m="<<m<<"\n";
}
int main()
{
sample s;
s.update();
s.write();
return 0;
}
