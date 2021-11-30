// default arguments of finding area of circle
#include<iostream>
using namespace std;
float area(float r,float pi=3.14);
int main()
{
int a;
cout<<"enter the radius";
cin>>a;
cout<<"area of acircle with radius"<<a<<"is"<<area(a);
return 0;
}
float area(float x,float y)
{
return (y*x*x);
}

