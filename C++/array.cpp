//array of objects
#include<iostream>
using namespace std;
class student
{
char name[20];
int age;
public:
void getdata();
void putdata();
};
void student::getdata()
{
cout<<"enter name:";
cin>>name;
cout<<"enter age:";
cin>>age;
}
void student::putdata()
{
cout<<"name"<<name<<endl;
cout<<"age"<<age<<"\n";
}
int main()
{
student s[10];
for(int i=0;i<10;i++)
{
cout<<"enter details of student"<<"\n";
s[i].getdata();
}
for(int i=0;i<10;i++)
{
cout<<"details of student"<<endl;
s[i].putdata();
}
}
