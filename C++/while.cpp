#include<iostream>
using namespace std;
int main()
{
int i=1;
 float sum=0,avg;
while(i<=10)
{
sum=sum+i;
i++;
}
avg=sum/10;
cout<<"sum="<<sum<<"\n";
cout<<"avg="<<avg<<"\n";
}
