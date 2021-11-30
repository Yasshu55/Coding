//transpose of matrix for returning objects
#include<iostream>
using namespace std;
class matrix
{
int m[30][30];
public:
void read()
{
cout<<"enter elements\n";
int i,j;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
cout<<"m["<<i<<"]["<<j<<"]=";
cin>>m[i][j];
}
void display()
{
int i,j;
for(i=0;i<3;i++)
{
cout<<"\n";
for(j=0;j<3;j++)
{
cout<<m[i][j]<<"\t";
}
}
}
matrix trans(matrix (m1))
{
matrix m2;
int i,j;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
m2.m[i][j]=m1.m[j][i];
return(m2);
}
};
int main()
{
matrix mat1,mat2;
mat1.read();
cout<<"matrix:\n";
mat1.display();
mat2=mat1.trans(mat1);
cout<<"\n transpose matrix:\n";
mat2.display();
return 0;
}
