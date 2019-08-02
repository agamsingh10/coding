//write a progrom to Check Prime Number.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int n,i,flag;
cout<<"Enter a number ";
cin>>n;
if (n==2)
cout<<"it is a prime number" ;
else{
for (i=2;i<=n-1;i++)
{
if (n%i==0)
{flag =1;    break;
}
else
flag =0;
}
if (flag ==0)
cout<<"it is a prime number";
else
cout<<"it is not a prime number";

  }
getch();
}



