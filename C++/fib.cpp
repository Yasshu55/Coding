// fibanocii series
#include<iostream>
using namespace std;
class fib
{
int a,b;
public:
fib()
{
a=0;
b=1;
}
void series(int n)
{
int c;
cout<<a<<","<<b;
for(int i=0;i<n;i++)
{
c=a+b;
cout<<","<<c;
a=b;
b=c;
}
}
};
int main()
{
fib f;
int l;
cout<<"enter length of the series\n";
cin>>l;
cout<<"\n fibanocii series\n";
f.series(l-2);
return 0;
}
