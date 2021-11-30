// scope resolution operator
#include<iostream>
using namespace std;
int m=10;
int main()
{
int m=20;
{
int p=m;
int m=30;
cout<<"inner block\n";
cout<<"p="<<p;
cout<<"m="<<m;
cout<<"::m="<<::m<<"\n";
}
cout<<"outer block\n";
cout<<"m="<<m<<"\n";
cout<<"::m="<<::m<<"\n";
return 0;
}
