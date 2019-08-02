#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include <process.h>

void display();
void transpose();
void nosbd();
void nosad();
void sum();

void sumrow();
void sumcol();
char ch;
void accept();
   int  a[20][20] ,i,j,m,n,choice;
void main()
{ clrscr();
do
{


cout<<"         menu        "<<endl<<"1. transpose" <<endl<<"2. print numbers below diagnol"<<endl<<"3.print numbers above diagonal"<<endl<<"4.print sum of numbers above and below diagonal"<<endl<<"5.print row sum"<<endl<<" 6. column sum of matrix"<<endl<<"7.exit"<<endl ;

accept();
 display();
 cout<<endl<<"enter a choice"<<endl ;
 cin>>choice;
 switch(choice)
 { case 1 : transpose();
 break;
 case 2: nosbd();
 break;
 case 3 :nosad();
 break;
 case 4: sum();
 break;
 case 5: sumrow();  break;
 case 6:  sumcol(); break;
 case 7: exit(0) ;
 }
 cout<<endl<<"do u wish to continue?";
 } while( ch=='y' || ch== 'Y');
 getch();
 }
 void transpose()
 { int b[20][20] ;
  for( i=0 ; i< m; i++)
  { for( j=0 ; j< n;j++)
  { b[j][i] = a[i][j];
  }}
  for( i=0 ;i<n ;i++)
  { for(j=0 ; j< m; j++)
  {cout<< b[i][j]<<" ";
  }cout<<endl;
  }
  }
  void nosbd()

  { for( i=0; i<m ;i++)
  { for(j=0;j<n;j++)
  { if(i>j)
  cout<<a[i][j]<<" ";
  }  cout<<" ";
  }
  }
  void nosad()
  {    for( i=0; i<m ;i++)
  { for(j=0;j<n;j++)
  { if (j>i)
  cout<<a[i][j]<<" ";
  }cout<<" ";
  }}

   void sum()
   { int sum=0 , sum1=0 , sum3=0;
     for( i=0; i<m ;i++)
  { for(j=0;j<n;j++)
  {    if(i>j)
  sum=sum + a[i][j];
  }}
    for( i=0; i<m ;i++)
  { for(j=0;j<n;j++)
  { if(j>i)
  sum1=sum1 + a[i][j];
}}
sum3= sum + sum1 ;
cout<< sum3;
}
void sumrow()
{ int sum=0 ;
  for( i=0; i<m ;i++)
  {   sum=0       ;
   for(j=0;j<n;j++)
   { sum=sum + a[i][j];
   }
   cout<<"sum of"<<  i+1<<"row is" <<sum<<endl;
   }
   }
   void sumcol()
   { int sum=0;
    for( j=0; j<n ;j++)
  { sum=0;
   for(i=0;i<n;i++)
  {       sum= sum + a[i][j];
  }
  cout<<"sum of"<<j+1<<"column is"<<sum<<endl ;
  }}
  void accept()
  {  cout<<"enter rows of matrix";
 cin>>m;
 cout<<"enter columns of matrix";
 cin>>n;
   cout<<"enter matrix" ;

 for(i=0; i<m ;i++)
 { for (j=0;j<n ; j++)
 { cin>> a[i][j];
 }
 }
 }
  void display()
  {
   for(i=0; i<m ;i++)
 { for (j=0;j<n ; j++)
 { cout<< a[i][j]<<" ";
 }   cout<<endl;
 }
   }




