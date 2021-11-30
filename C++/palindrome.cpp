//pallindrome
#include<iostream>
using namespace std;
class palindrome
{
int rev,num,a;
public:
palindrome()
{
num=23;
rev=0;
}
palindrome(int n)
{
num=n;
rev=0;
}
void numpalindrome()
{
int rem;
int n=num;
 a=n;
while(n!=0)
{
rem=n%10;
n=n/10;
rev=rev*10+rem;
}
}
void print()
{
if(rev==a)
cout<<"the given number is palindrome:";
else
cout<<"the given number is not a palindrome:";
}
};
int main()
{
palindrome p;
palindrome p1(484);
p.numpalindrome();
p1.numpalindrome();
p.print();
p1.print();
}
