#include<iostream>
using namespace std;
int main()
{
int i=1;
 float sum=0,avg;
do
{
sum=sum+i;
i++;
}
while(i<=10);
avg=sum/10;
cout<<"sum="<<sum<<"\n";
cout<<"avg="<<avg<<"\n";
}
