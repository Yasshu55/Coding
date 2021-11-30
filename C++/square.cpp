// square and cube of a number using inline function
#include<iostream>
using namespace std;
int square(int);
int cube(int);
int main()
{
int a,b;
a=square(5);
b=cube(2);
cout<<"square of 5 is="<<a;
cout<<"cube of 2 is="<<b;
}
inline int square(int x)
{ 
return (x*x);
}
inline int cube(int y)
{
return (y*y*y);
}

