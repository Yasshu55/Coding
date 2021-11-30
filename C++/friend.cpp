#include<iostream>
using namespace std;
class matrix 2;
class matrix 1
{
int m1[][];
int r1,c1;
public:
void getmatrix1(void);
void putmatrix1(void);
friend void addmatrix(matrix1 x,matrix2 y);
};
class matrix 2
{
int m2[][];
int r2,c2;
public:
void getmatrix2();
void putmatrix();
friend void addmatrix(matrix1 x,matrix2 y);
};
void matrix1::getmatrix1()
{
cout<<"enter the elements of matrix1: ";
cin>>r1>>c1;
for(int i=0;i<r1;i++)
for(j=0;j<c1;j++)
{
cin>>m1[i][j];
}
}
voidmatrix2::getmatrix2()
{
cout<<"enter the no.of rows and columns:";
cin>>r2>>c2;
for(int i=0;i<r2;i++)
for(j=0;j<c2;j++)
{
cin>>m2[i][j];
}
}
void matrix1::putmatrix1()
{
cout<<"elements of matrix m1\n";
for(int i=0;i<r1;i++)
{
cout<<"\n";
for(int j=0;j<c1;j++)
{
cout<<m1[i][j]<<"\t";
}
}
}
void matrix2::
