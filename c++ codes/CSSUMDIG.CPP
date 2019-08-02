//write a progrom to find sum of the digits  of a Number.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int n,i,sum=0 ,rem;
cout<<"Enter a number ";
cin>>n;
while(n>0)
{
 rem= n%10;
sum = sum +rem;
n= n/10;
}
cout<<"sum of the digits of the number is " <<sum;
getch();
}