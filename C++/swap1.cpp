#include <iostream>
using namespace std;
void swap(int &,int &);
int main()
{
int a,b;
cout<<"enter the value of a:";
cin>>a;
cout<<"enter the value of b:";
cin>>b;
cout<<"before swapping\nvalue of a is"<<"\nvalue of b is "<<b;
swap(a,b);
cout<<"outside function after swapping\nvalue of a is"<<a<<"\nvalue of b is"<<b;
}
void swap(int &a,int &b)
{
int c;
c=a;
a=b;
b=c;
cout<<"inside function after swapping\nvalue of a is"<<a<<"\nvalue of b is"<<b;
}


