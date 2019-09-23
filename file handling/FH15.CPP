#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
class student
{ int ad;
char name[39];
float marks;
    public:
    void getdata()
    {cout<<"enter info"<<endl;
     cin>>ad;
    cin>>marks;
    gets(name); }
    void display()

    {cout<<"name .....bjhe";
    cout<<ad<<" " <<name<<" "<<marks;         }
    };
void main()
{clrscr();
student g;
ofstream fcout("abc.dat", ios::binary|ios::out);
for(int i=0;i<3;i++)
  {  g.getdata();
    fcout.write((char*)&g, sizeof(g));
    }
    fcout.close();
 getch();
 }
