#include <iostream>
using namespace std;
void swap(int,int);
int main()
{
int a,b;
cout<<"enter the value of 1st no:";
cin>>a;
cout<<"enter the value of 2nd no:";
cin>>b;
cout<<"before swapping\nvalue of 1st no is"<<"\nvalue of 2nd no is "<<b;
swap(a,b);
cout<<"outside function after swapping\nvalue of 1st no is"<<a<<"\nvalue of 2nd no is"<<b;
}
void swap(int a,int b)
{
int c;
c=a;
a=b;
b=c;
cout<<"inside function after swapping\nvalue of 1st no is"<<a<<"\nvalue of 2nd no is"<<b;
}

