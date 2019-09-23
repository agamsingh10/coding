//to find the products of each column of a matrix
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include <process.h>


   void procol(int a[50][50] , int m, int n)
   { int prod=1,j,i;
    for( j=0; j<n ;j++)
  { prod=1;
   for(i=0;i<m;i++)
  {       prod= prod * a[i][j];
  }
  cout<<"product of  "<<j+1<<" column is "<<prod<<endl ;
  }}
  void main()
  { clrscr();
  int m,n,i,j,a[50][50];

   cout<<"enter rows of matrix";
 cin>>m;
 cout<<"enter columns of matrix";
 cin>>n;
   cout<<"enter matrix" ;

 for(i=0; i<m ;i++)
 { for (j=0;j<n ; j++)
 { cin>> a[i][j];
 }
 }
  for(i=0; i<m ;i++)
 { for (j=0;j<n ; j++)
 { cout<< a[i][j]<<" ";
 } cout<<endl;
 }
 procol(a ,m,n);
 getch();
 }






