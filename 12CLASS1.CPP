
//class
#include <iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class bill
{ long bill_no;
int bill_period , no_of_calls;
char payment_mode[20];
float amount;
void calculate_bill()
{ if(no_of_calls<=500)
amount=1;
else if   (no_of_calls>=501 && no_of_calls<=1200)
amount=1;
else if (no_of_calls>1200)
amount=4;
if( strcmp( payment_mode , "online")==0)
amount = amount-(0.05*amount) ;
}
public:
void new_bill()
{ cout<<"enter bill number \n" ;
cin>>bill_no ;
cout<<"enter bill period \n" ;
cin>>bill_period;
cout<<"enter number of calls \n" ;
cin>>no_of_calls;
cout<<"enter payment mode \n" ;
gets(payment_mode) ;
calculate_bill();
}
void print_bill()
{ cout<<"bill number is " <<bill_no;



 cout<<"bill_period is " <<bill_period;
  cout<<"number of calls  is " <<no_of_calls;
  cout<<"payment method is " <<payment_mode;
  cout<<"amopunt is " <<amount;
  }
  char* ret_mode()
  { return payment_mode;
  }
  };
  void main()

  {clrscr();
  int count1=0 ,i, count2=0;
  bill g[100];
  int n;
  cout<<"enter number of entries" ;
  cin>>n;
  for(i=0;i<n;i++)
  g[i].new_bill();
   for(i=0;i<n;i++)
 { if( strcmp(g[i].ret_mode(), "offline")==0)
 count1++ ;
   else if( strcmp(g[i].ret_mode(), "online")==0)
   count2++;}
   cout<<"total offline records are  " <<count1;
   cout<<"total online records are  " <<count2;
   getch();
  }
