//write a function to implement binary search which takes as argumentsan integer array and a number to be found and display if the number is found or not in main function.
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include <process.h>
int array(int[50],int,int);
void main()
{ clrscr();
int  A[50],b ,i,n,m;
 cout<<"enter size of an array"<<endl;
 cin>>n;
 cout<<" enter a number to be found"<<endl;
 cin>>m;
 cout<<"enter array elements" ;
 for(i=0; i<n ;i++)

 { cin>> A[i];
 }
  cout<<" array is"<<endl;
     for(i=0; i<n ;i++)

 { cout<< A[i]<<"  ";
 }    cout<<endl;
b= array(A ,n,m);
if(b==0)
cout<<"number found";
else
cout<<"number not found"     ;

   getch();
 }
 int array(int A[50] , int n,int m)
 { int mid,beg,end,flag;
 beg=0;
 end=n-1;
 while(beg<=end)
 { mid= (beg +end)/2;
 if   (A[mid]==m)
{ flag =0;
break;      }
else if(m<A[mid])
{end =mid-1;
flag=1;}
   else if( m> A[mid])
 {  beg=mid+1;
   flag=1;

  }

  }

  return flag;
   }



