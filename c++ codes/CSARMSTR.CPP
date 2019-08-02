// to check whether the number is armstrong or not.//
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
 int n,ans=0,m,rem;
 cout<<"enter the number";
 cin>>n;
 while(n>0)
 { rem=n%10;
 ans=ans +(rem*rem*rem);
 n=n/10;
 }
 if(ans==m)
 { cout<<"it is armstrong number";
 }
 else
 {cout<<"it is not an armstrong number";
 }
 getch();

 }
