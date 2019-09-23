#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
/*void main()
{clrscr();
char ch[50];
ofstream fcout("agam.txt");
for(int i=0;i<5;i++)
  {  gets(ch);
    fcout<<ch;
    }
    fcout.close();
 getch();
 }   */
void main()
{ clrscr();char ch[100];
ifstream fcin("agam.txt");
while(!fcin.eof())
{fcin.getline(ch,100);
 cout<<ch;
 }
 fcin.close();
 getch();
 }
