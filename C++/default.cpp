// defaultarguments
#include<iostream>
using namespace std;
int power(int m,int n=2);
int main()
{
int a,b;
cout<<"enter the values of aand its power b:";
cin>>a>>b;
int c=power(a);
cout<<"square of"<<a<<"is"<<c;
c=power(a,b);
cout<<b<<"the power of"<<a<<"is"<<c;
return 0;
}
int power(int x,int y)
{
int temp=1;
for(int i=0;i<y;i++)
temp=temp*x;
return (temp);
}
