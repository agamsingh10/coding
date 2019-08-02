//write a progrom to print sum of elements of diagonal of matrix

#include<iostream.h>
#include<conio.h>
void main()
{

clrscr();

int a[50][50],b=0,i,j,m,n;
cout<<"Enter the order of matrix (square matrix ) ";
cin>>n;

cout<<" Enter the elements of matrix "<<endl;
for (i=0;i<n;i++)
{
for (j=0;j<n;j++)
cin>>a[i][j];
}
cout<<" Elements of matrix are "<<endl;
for (i=0;i<n;i++)
{
cout<<endl;
for (j=0;j<n;j++)
cout<<a[i][j]<<" ";
}
cout<<" Sum of diagonal element is "<<endl;
for (i=0;i<n;i++)
{
for (j=0;j<n;j++)
{
if (i==j)
b=b+a[i][j];
}
}
cout<<b;
getch();

}



