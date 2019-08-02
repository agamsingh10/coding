// to calculate bill according to specific conditions.//
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
 long int nou, bill;
 cout<<"enter the number of units" ;
 cin>>nou;
 if (nou<200 && nou >=0)
 { bill= 400;
 }
 else if (nou>200 && nou <=300)
 { bill=400+ 100*(nou-200);
 }
 else if(nou>300 && nou<=400)
 { bill= 400 + (100*100) +200*(nou-300) ;
 }
 else
 { bill=400 + (100*100) +(200*100) + 300*(nou-400);
 }
 cout<<"Bill is"<<" "<<bill;
 getch();
 }
