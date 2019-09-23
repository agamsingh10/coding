#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
/*void main()
{clrscr();
char ch[50];
ofstream fcout("agam1.txt");
for(int i=0;i<5;i++)
  {  gets(ch);
    fcout<<ch;
    }
    fcout.close();
 getch();
 }       */
void main()
{ clrscr();char ch[20];
ifstream fcin("agam1.txt");
int ctr=0;
while(!fcin.eof())
{fcin>>ch;
 if(strcmp(ch,"do")==0)
{ cout<<ch;
 ctr++; }
 }
 fcin.close();
 cout<<"count of characters is"   <<ctr;
 getch();
 }
