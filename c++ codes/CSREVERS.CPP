//write a progrom to find reverse of a Number.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int n,i,rev=0 ,rem;
cout<<"Enter a number ";
cin>>n;
while(n>0)
{
 rem= n%10;
rev = (rev *10) +rem;
n= n/10;
}
cout<<"reverse of the number is " <<rev;
getch();
}