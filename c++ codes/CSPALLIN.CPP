//write a progrom to check if a number is pallindrome or not.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int n,i,rev=0,m ,rem;
cout<<"Enter a number ";
cin>>n;
m=n;
while(n>0)
{
 rem= n%10;
rev = (rev *10) +rem;
n= n/10;
}
if(m==rev)
cout<<"it is a pallindrome";
else
cout<<"it is not a pallindrome" ;

getch();
}