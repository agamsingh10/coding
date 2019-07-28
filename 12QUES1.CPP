//write a function to accept a 2D array of intergers and its size as arguments and displays elements which are clubbed between two even numbers vertically.

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include <process.h>
void array(int[50][50],int , int);
void main()
{ clrscr();
int  A[50][50] ,j,i,m,n;
 cout<<"enter rows of an array"<<endl;
 cin>>n;
 cout<<"enter columns of array"<<endl;
 cin>>m;
 cout<<"enter array elements \n"   ;
 for(i=0; i<n ;i++)
{ for(j=0;j<m;j++)

 { cin>> A[i][j];
 }
 }
 cout<<"array is"<<endl;
  for(i=0; i<n ;i++)
{ for(j=0;j<m;j++)

 { cout<< A[i][j]<<"  ";
 }   cout<<endl;
 }
 array(A ,n,m);
   getch();
 }
 void array(int A[50][50] , int n,int m)
 { int i ,j ;
 cout<<"number clubbed between two even numbers is \n"       ;
   for(j=0;j<m ;j++)
   { for(i=1;i<=n-2;i++)
   { if( A[i-1][j]%2==0 && A[i+1][j]%2==0)
   { cout<< A[i][j]<<"   ";
   } cout<<endl;
   }}


   }



