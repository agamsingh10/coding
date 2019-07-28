//write a function which accepts an interger array and size as aruments and assign values into a 2D array of integers

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include <process.h>
void array(int[] , int);
void main()
{ clrscr();
int  A[20] ,i,n;
 cout<<"enter size of an array";
 cin>>n;
 cout<<"enter array";

 for(i=0; i<n ;i++)
 { cin>> A[i];
 }
 array(A ,n);
   getch();
 }
 void array(int A[20] , int m)
 { int i ,j,B[50][50] ;
   for (i=0;i<m;i++)
   { for(j=0;j<m;j++)
   {B[i][j]=0;
   }}

   for(i=0;i<m;i++)
   { for(j=0;j<=m-1-i;j++)
   { B[i][j] =A[j];
   }
   }
   for (i=0;i<m;i++)
   { for(j=0;j<m;j++)
   {cout<<B[i][j]<<"  ";
   }cout<<endl;
   }
















  }
