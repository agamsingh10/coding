//write a progrom to find number power to another  Number.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int i,a,ans=1,b;
cout<<"Enter values of both numbers ";
cin>>a>>b;
 for( i=1; i<=b ; i++)
{ans =ans* a;
}
cout<<"answer is " << ans  ;
getch();
}