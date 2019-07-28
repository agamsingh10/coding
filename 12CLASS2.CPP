
//create class 2
#include <iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class candidate
{ long rno;

char cname[20],grade;
float agg;
void setgrade()
{ if(agg>=80)
grade='A';
else if   (agg<80 && agg>=65)
grade='B';
else if (agg<65 && agg>=50)
grade='C' ;
else if(agg<50)
grade='D'  ;
}
public:
void getdata()
{ cout<<"enter registration number\n " ;
cin>>rno ;
cout<<"enter aggregate marks \n" ;
cin>>agg;
cout<<"enter candidate name \n" ;
gets(cname) ;
setgrade();
  }
void dispresult()

{ cout<<"registration number: " <<rno<<endl;
cout<<"candidate name : "<<cname<<endl;
  cout<<"aggregate marks: " <<agg<<endl;
  cout<<"grade: " <<grade<<endl;

  }
  int retagg()
  { return agg;
  }
  };
  void main()

  {clrscr();
    candidate a[50],c;
    int  i ,j ,n;
    cout<<"enter number of candidates \n";
    cin>>n;
  for(i=0;i<n;i++)
  a[i].getdata();

  for( j=n-2; j>=0 ;j--)
  { for(i=0;i<=j;i++)
  { if(a[i].retagg()<a[i+1].retagg())
  { c=a[i];
  a[i]=a[i+1];
  a[i+1]=c;
  }}}
  cout<<"arranged  in descending order :\n "  ;
 for(i=0;i<n;i++)
 { a[i].dispresult();
 }
   getch();
  }
