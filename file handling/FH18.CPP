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

    {cout<<"name .....";
    cout<<ad<<" " <<name<<" "<<marks;         }
    int retmarks()
    {return ad;}
    };

/*void main()
{clrscr();
student g;
ofstream fcout("abc.dat", ios::binary|ios::out);
for(int i=0;i<3;i++)
  {  g.getdata();
    fcout.write((char*)&g, sizeof(g));
    }
    fcout.close();
 getch();
 }  */
	    void main()
{clrscr();
student g;
int rno;
cin>>rno;
ifstream fcin("abc.dat", ios::binary|ios::in);
ofstream fcout("ghi.dat" , ios::binary|ios::out);

  while(!fcin.eof())
   { fcin.read((char*)&g, sizeof(g));

  if(g.retmarks()!=rno)
  fcout.write((char*)&g, sizeof(g));
       }fcout.close();
       fcin.close();
       remove("abc.dat")                 ;
       rename("ghi.dat" , "abc.dat")    ;

   }
       getch();
       }



