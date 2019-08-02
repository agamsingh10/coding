
// TO DISPLAY SUM OF THE DIAGONLS IN A MATRIX

#include<iostream.h>
#include<conio.h>


void main()
{clrscr();
int i,j,a[20][20],m , n,sum=0, sum1=0, sum2=0;
cout<< " enter order of matrix";
cin>>m>>n;
cout<<"enter elements of matrix";
  for( i=0; i<m ;i++)
  {
   for(j=0;j<n;j++)
  {
  cin>>a[i][j] ;

  }
  }
   for( i=0; i<m ;i++)
  { for(j=0;j<n;j++)
  {
  cout<<a[i][j]<<" ";
  }  cout<<endl;
  }
   for( i=0; i<m ;i++)
  { for(j=0;j<n;j++)
  { if(i>j)
  sum=sum + a[i][j];
  }  cout<<endl;
  }
  cout<<"sum of diagonal 1 is " << sum;
   for( i=0; i<m ;i++)
  { for(j=0;j<n;j++)
  { if(j>i)
  sum1=sum1 + a[i][j];
  }  cout<<endl;
  }
  cout<<"sum of diagonal 2 is " << sum1;
  sum2=sum +sum1;
  cout<<"sum of both diagonals is " << sum2;
  getch();
  }