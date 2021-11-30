// addition,subtraction,multiplication of two numbers using inline function
#include<iostream>
using namespace std;
int add(int,int);
int sub(int,int);
int mul(int,int);
int main()
{
int a,b;
cout<<"enter the values of a,b:";
cin>>a>>b;
cout<<"add of a,b is="<<a+b;
cout<<"sub of a,b is="<<a-b;
cout<<"mul of a,b is="<<a*b;
}
inline int add(int x,int y)
{
return (x+y);
}
inline int sub(int x,int y)
{
return (x-y);
}
inline int mul(int x,int y)
{
return (x*y);
}
