//return by reference
#include<iostream>
using namespace std;
int& comp(int&,int&);
int main()
{
int c,a,b;
cout<<"enter the values of a,b:";
cin>>a>>b;
c=comp(a,b);
if(c=a)
cout<<"a is big\n";
else
cout<<"b is big\n";
}
int& comp(int &x,int &y)
{
if(x>y)
return x;
else 
return y;
}
