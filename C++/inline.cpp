//largest of 3 numbers using inline function
#include<iostream>
using namespace std;
int comp(int,int,int);
int main()
{
int a,b,c;
cout<<"enter a,b,c values:";
cin>>a>>b>>c;
cout<<"largest of a,b,c:"<<comp(a,b,c);
return 0;
}
inline int comp(int a,int b,int c)
{
return ((a>b)?((a>c)?a:c):((b>c)?b:c));
}
