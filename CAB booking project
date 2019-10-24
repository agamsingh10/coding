#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>

class Passenger
{
		char pname[30];
		int age;
		long int phoneno;
		char gender;
		char address[30];
	public:
		int routeno;
		Passenger( ){ }
		void Get_data();
		void Show_data();
};


void Passenger::Get_data()
{
		cout<<"Enter Passenger Name:";
		gets(pname);
		cout<<"Enter age:";
		cin>>age;
		cout<<"Enter phone number:";
		cin>>phoneno;
		cout<<"Gender m or f";
		cin>>gender;
		cout<<"Enter address:";
		gets(address);

}
void Passenger::Show_data()
{
		cout<<"Passenger Name:\t"<<pname<<endl;
		cout<<"Age:\t"<<age<<endl;
		cout<<"Phone number:\t"<<phoneno<<endl;
		cout<<"Gender :\t"<<gender<<endl;
		cout<<"Address:\t"<<address<<endl;

}


class Cab
{
		char dname[30];
		char cabno[40];
		char source[30];
		char destination[30];
		float charges;
		float gst;
		float totalfare;

	public:
		int routeno;
		Cab( ){ }
		void Get_data();
		void Show_data();
		void Show_route();
		char *ret_cabno();
};

void Cab::Get_data()
{
		cout<<"Enter Driver Name:";
		gets(dname);
		cout<<"Enter cabno:";
		gets(cabno);
		cout<<"Enter source:";
		gets(source);
		cout<<"Enter Destination:";
		gets(destination);
		cout<<"Enter charges";
		cin>>charges;
		gst=charges*18/100;
		totalfare=charges+gst;

}

void Cab::Show_route()
{

		cout<<"\nRoute no :\t"<<routeno<<endl;
		cout<<"\nSource :\t";
		puts(source);
		cout<<"\nDestination:\t";
		puts(destination);
		cout<<"charges :\t";
		cout<<charges;
		cout<<"\nGST is:\t"<<gst;
		cout<<"\nTotal Fare:\t"<<totalfare<<endl;
}

void Cab::Show_data()
{
		cout<<"\nRoute no :\t"<<routeno<<endl;

		cout<<"Driver Name:\t";
		puts(dname);
		cout<<"\ncabno:\t";
		puts(cabno);
		cout<<"\nSource :\t";
		puts(source);
		cout<<"\nDestination:\t";
		puts(destination);
		cout<<"charges :\t";
		cout<<charges;
		cout<<"\nGST is:\t"<<gst;
		cout<<"\nTotal Fare:\t"<<totalfare<<endl;
}

char* Cab::ret_cabno()
{
	return cabno;
}


void Book()
{
	Cab C;
	Passenger P;
	int rn,f;
	char ch;
	ifstream fcin("cab.dat",ios::in|ios::binary);
	ofstream fcout("passenger.dat",ios::out|ios::app|ios::binary);
	fcin.seekg(0,ios::end);
	int pos=fcin.tellg()/sizeof(C);
	fcin.seekg(0);
	if(pos==0)
		cout<<"\nNo Cab available"<<endl;
	else
	{
		for(int i=1;i<=pos;i++)
		{
			fcin.read((char*)&C,sizeof(C));
			C.Show_data();
		}
		do{

			cout<<"\nEnter route number to book\n";
			cin>>rn;
			if(pos<rn)
			{
				f=1;
				cout<<"\nWrong Route number entered\n";
				cout<<"Try Again\n";
			}
			else
			{
				f=0;
				cout<<"\nAre you sure you want to book y or n"<<endl;
				cin>>ch;
				fcin.seekg((pos-1)*sizeof(C));
				if(ch=='y'||ch=='Y');
				{
					P.routeno=C.routeno;
					cout<<"\nEnter your details\n"<<endl;
					P.Get_data();
					cout<<"\nYour Cab information is \n"<<endl;
					C.Show_data();
					fcout.write((char*)&P,sizeof(P));

				}

			}
		}while(f==1);
	}
	fcin.close();
	fcout.close();
}

void View()
{
	Cab C;
	char ch;
	Passenger P;
	int rn,f;
	ifstream fcin("cab.dat",ios::in|ios::binary);
	ifstream fin("passenger.dat",ios::in|ios::binary);
	fcin.seekg(0,ios::end);
	int pos=fcin.tellg()/sizeof(P);
	fcin.seekg(0);
	do{

		cout<<"\nEnter route number to view booking\n";
		cin>>rn;

		if(pos<rn)
		{
			f=1;
			cout<<"\nWrong Route number entered\n";
			cout<<"Try Again\n";
		}
		else
		{
			f=0;
			fin.seekg((rn-1)*sizeof(P));
			fcin.seekg((rn-1)*sizeof(C));
			fcin.read((char*)&C,sizeof(C));
			fin.read((char*)&P,sizeof(P));
			P.Show_data();
			C.Show_data();
			break;

		}
	}while(f==1);
	fcin.close();
	fin.close();
}


void Cancel()
{
	char ch;
	Passenger P;
	int rn,f;
	ofstream fcout("temp.dat",ios::out|ios::binary);
	ifstream fcin("passenger.dat",ios::in|ios::binary);
	fcin.seekg(0,ios::end);
	int pos=fcin.tellg()/sizeof(P);
	if(pos!=0)
	{

	fcin.seekg(0);
	 do{
		cout<<"\nEnter route no to cancel\n";
		cin>>rn;

		if(pos<rn)
		{
			f=1;
			cout<<"\nWrong Route number entered\n";
			cout<<"Try Again\n";
		}
		else
		{       f=1;
			while(!fcin.eof())
			{
				fcin.read((char*)&P,sizeof(P));
				if(P.routeno!=rn)
				{
					fcout.write((char*)&P,sizeof(P));
				}
				else
					f=0;

			}
			if(f==0)
				cout<<"\nBooking Cancelled"<<endl;
			else
				cout<<"\nNo such booking"<<endl;
		}
	 }while(f==1);
	}
	else
		cout<<"\nNo booking available\n";
	fcin.close();
	fcout.close();
	remove("passenger.dat");
	rename("temp.dat","passenger.dat");
}




void customer()
{
	int choice;
	char ch;
	do
	{
		clrscr();
		cout<<"MAIN MENU"<<endl;
		cout<<"1.Book Cab"<<endl;
		cout<<"2.Cancel Cab"<<endl;
		cout<<"3.View your trip"<<endl;
		cout<<"0.Exit"<<endl;
		cout<<"Enter the choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				Book();

				break;
			case 2:
				Cancel();
				break;
			case 3:
				View();
				break;
		       case 0:
				exit(0);
		}
		cout<<"\nDo you wish to continue y or n";
		ch=getch();
	}while(ch=='y'||ch=='Y');
	getch();
}


void Add()
{
	Cab C;
	ifstream fcin("cab.dat",ios::in|ios::binary);
	fcin.seekg(0,ios::end);
	int pos=fcin.tellg()/sizeof(C);
	C.routeno=pos+1;
	fcin.close();
	ofstream fcout("cab.dat",ios::out|ios::app|ios::binary);
	C.Get_data();
	fcout.write((char*)&C,sizeof(C));
	fcout.close();
}

void Display()
{
	Cab C;
	ifstream fcin("cab.dat",ios::in|ios::binary);
	fcin.seekg(0,ios::end);
	int pos=fcin.tellg()/sizeof(C);
	fcin.seekg(0);
	for(int i=1;i<=pos;i++)
	{
		fcin.read((char*)&C,sizeof(C));
		C.Show_data();

	}
	fcin.close();

}

void Delete()
{
	Cab C;
	int f=0;
	char cno[40];
	ifstream fcin("cab.dat",ios::in|ios::binary);
	ofstream fcout("temp.dat",ios::out|ios::binary);
	fcin.seekg(0,ios::end);
	int pos=fcin.tellg()/sizeof(C);
	if(pos==0)
		cout<<"\nNo information available"<<endl;
	else
	{
		cout<<"\nEnter cab number whose record is to be deleted"<<endl;
		gets(cno);
		fcin.seekg(0);
		for(int i=1;i<=pos;i++)
		{
			fcin.read((char*)&C,sizeof(C));
			if(strcmp(C.ret_cabno(),cno)!=0)
			{
				fcout.write((char*)&C,sizeof(C));
			}
			else
				f=1;

		}

	}
		fcin.close();
		fcout.close();
		remove("cab.dat");
		rename("temp.dat","cab.dat");
		if(f==1)
			cout<<"\nRecord Deleted\n";
		else
			cout<<"\nRecord doesnt exit"<<endl;


}


void Modify()
{
	Cab C;
	int f=0;
	char cno[40];
	ifstream fcin("cab.dat",ios::in|ios::binary);
	ofstream fcout("temp.dat",ios::out|ios::binary);
	fcin.seekg(0,ios::end);
	int pos=fcin.tellg()/sizeof(C);
	if(pos==0)
		cout<<"\nNo information available"<<endl;
	else
	{
		cout<<"\nEnter cab number whose record is to be modified"<<endl;
		gets(cno);
		fcin.seekg(0);
		for(int i=1;i<=pos;i++)
		{
			fcin.read((char*)&C,sizeof(C));
			if(strcmp(C.ret_cabno(),cno)==0)
			{
				f=1;
				cout<<"\\nEnter New information"<<endl;
				C.Get_data();
			}
				fcout.write((char*)&C,sizeof(C));
		}

	}
		fcin.close();
		fcout.close();
		remove("cab.dat");
		rename("temp.dat","cab.dat");
		if(f==1)
			cout<<"\nRecord Modified Successfully\n";
		else
			cout<<"\nRecord does not exist"<<endl;


}

void admin()
{

	int choice;
	char ch ,uid[30],password[30];

	do{
		cout<<"Enter user id and password";
		gets(uid);
		gets(password);
		if(((strcmp(uid,"project")!=0)||(strcmp(password,"project")!=0)))
		{
			cout<<"Wrong user id or password"<<endl;
			cout<<"try again"<<endl;
			ch='n';
		}
		else
		{
			ch='y';
		}
	}while(ch=='n');

		do
		{
			clrscr();
		cout<<"\nMenu"<<endl;
		cout<<"1.Add"<<endl;
		cout<<"2.Delete"<<endl;
		cout<<"3.Modify"<<endl;
		cout<<"4.Display"<<endl;
		cout<<"0.Exit"<<endl;
		cout<<"Enter the choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				Add();
				break;
			case 2:
				Delete();
				break;
			case 3:
				Modify();
				break;
			case 4:
				Display();
				break;
			case 0:
				exit(0);
			default:
				cout<<"Wrong choice entered\n";
		}
		cout<<"\nDo you wish to continue y or n\n";
		ch=getch();
	}while(ch=='y'||ch=='Y');

	getch();
}




void main( )
{
	clrscr();
	int choice;
	char ch;
	do
	{
	cout<<"Main Menu"<<endl;
	cout<<"1.Customer"<<endl;
	cout<<"2.Admin"<<endl;
	cout<<"0.exit"<<endl;
	cout<<"Enter the choice"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			customer();
			break;
		case 2:
			admin();
			break;
		case 0:
			exit(0);
		default:
			cout<<"Wrong choice entered"<<endl;
	}
	 cout<<"Do you wish to continue y or n";
	 ch=getch();
	}while(ch=='Y'||ch=='y');
	getch();
}
