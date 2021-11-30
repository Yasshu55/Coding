//data members
#include<iostream>
using namespace std;
class student 
{
int pinno;
char name;
int m1,m2,m3,m4,m5,m6;
int phnno;
char gender;

public:
void getdata();
void avg();
void grade();
void display();
};
void student::getdata()
{

cout<<"enter pinno:";
cin>>pinno;
cout<<"enter name:";
cin>>name;
cout<<"enter marks:";
cin>>m1>>m2>>m3>>m4>>m5>>m6;
cout<<"enter phnno:";
cin>>phnno;
cout<<"enter gender:";
cin>>gender;
}
void student::display()
{
int i;
cout<<"pinno"<<pinno<<"\n";
cout<"name"<<"\n";
cout<<"marks:"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4<<"\t"<<m5<<"\t"<<m6<<"\t"<<"\n";
cout<<"phnno"<<phnno<<"\n";
cout<<"gender"<<gender<<"\n";
}
void student::avg()
{
int i,sum;
for(i=0;i<6;i++)
{
sum=m1+m2+m3+m4+m5+m6;
avg=(sum)/6;
cout<<"avg="<<"\n";
}
}
void student::grade()
{
int i,A,B;
for(i=0;i<6;i++)
{
if((avg)>=90)
cout<<"A"<<A<<"\n";
else 
if(((avg)>=80)&&((avg)<90))
cout<<"B"<<"\n";
else
 cout<<"fail";
}
}
int main()
{
student s;
s.getdata();
s.display();
s.avg();
s.grade();
}
