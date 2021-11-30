// class program
#include <iostream>
using namespace std;
class person 
{
char name[30];
int age;
public;
void getdata();
void display();
}
void person::getdata()
{
cout<<"enter name:";
cin>>name;
cout<<"enter age:";
cin>>age;
}
void person::display()
{
cout<<"name:"<<name;
cout<<"age:"<<age;
}
int main()
{
person p;
p.getdata();
p.display();
}

