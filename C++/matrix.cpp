#include<iostream>
using namespace std;
class matrix
{
int **a;
int r,c;
public:
matrix(int m,int n)
{
r=m;
c=n;
a=new int *[r];
for(int i=0;i<r;i++)
a[i]=new int [c];
for(int i=0;i<r;i++)
for(int j=0;j<c;j++)
cin>>a[i][j];
}
matrix(matrix &m)
{
r=m.r;
c=m.c;
a=new int *[r];
for(int i=0;i<r;i++)
a[i]=new int[c];
for(int i=0;i<r;i++)
for(int j=0;j<c;j++)
a[i][j]=m.a[i][j];
}
void printmatrix()
{
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
cout<<a[i][j]<<"\t";
cout<<endl;
}
}
void addmatrix(matrix m1,matrix m2)
{
int i,j;
int **p;
p=new int *[m1.r];
for(i=0;i<m1.r;i++)
p[i]=new int [m1.c];
for(int i=0;i<r;i++)
for(int j=0;j<c;j++)
p[i][j]=m1.a[i][j]+m2.a[i][j];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
cout<<p[i][j]<<"\t";
cout<<endl;
}
}
};
int main()
{
int m,n;
cout<<"enter no.of rows and columns\n:";
cin>>m>>n;
cout<<"enter the elements\n";
matrix m1(m,n);
matrix m2(m1);
cout<<"matrix entered by you\n";
m1.printmatrix();
cout<<"sum of matrices\n";
m1.addmatrix(m1,m2);
}
