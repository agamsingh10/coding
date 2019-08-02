
//write a progrom to factorial of a  Number.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int n,i,ans=1;
cout<<"Enter a number ";
cin>>n;
for(i=n ; i>=1; i--)
{ ans = ans* i;
}
cout<<"factorial of the number is  " <<ans;
getch();
}



