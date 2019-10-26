#include<iostream>
#include"contacts.h"
using namespace std;


Contacts::Contacts():N1(),N()   //defaultconstructor
{
	postaladdress[0]='\0';
	emailid[0]='\0';
	other[0]='\0';
}

void Contacts::input()
{
	N.input();
	cout<<endl;
	N1.input();
	cout<<endl;
	cout<<"Enter Others: "<<endl;
	cin.ignore(1);
	cin.getline(other,25);
	char x;
	char y;
	cout<<"Enter"<<" p "<<"if you want to add postal address"<<endl;
	cin>>x;
	if(x=='p')
	{   
		cout<<"Enter postal address"<<endl;
		cin.ignore(1);
		cin.getline(postaladdress,15);
		cout<<endl;
		cout<<"Enter"<<" i "<<"if you want to add email id."<<endl;
		cin>>y;
		if(y=='i')
		{
			cin.ignore(1);
			cin.getline(emailid,15);
			cout<<endl;
		}
		else
		{
			cout<<"CONTACT CREATED"<<endl;
		}
	}
	else
	{
		cout<<endl;
		cout<<"Enter"<<" i "<<"if you want to add email id."<<endl;
		cin>>y;
		if(y=='i')
		{
			cin.ignore(1);
			cin.getline(emailid,15);
			cout<<endl;
			cout<<endl;
			cout<<"CONTACT CREATED"<<endl;
		}
		else
		{
			cout<<endl;
			cout<<"CONTACT CREATED"<<endl;
		}
	}
}

void Contacts::output()
{
	char *s=N.getname();
	cout<<"NAME:"<<s<<endl;
	char *a=N1.getmobilenum();
	char *p=N1.gethomenum();
	char *r=N1.getworknum();
	cout<<"Mobile Number: "<<a<<endl;
	cout<<"Home Number: "<<p<<endl;
	cout<<"Work Number: "<<r<<endl;
	cout<<"Other: "<<other<<endl;
	cout<<"Postal address: "<<postaladdress<<endl;
	cout<<"Email id: "<<emailid<<endl;
	
}

char Contacts::getalphabet()
{
	char alpha=N.getalphabet();
	return alpha;
}

char Contacts::getlastalphabet()
{
	char alpha=N.getlastalphabet();
	return alpha;
}

void Contacts::indexing()
{
	postaladdress[0]='\0';
	emailid[0]='\0';
	other[0]='\0';
	N.indexing();
	N1.indexing();
}

void Contacts::delnum()
{
	N1.delnum();
}

void Contacts::delhomenum()
{
	N1.delhomenum();
}

void Contacts::delworknum()
{
	N1.delworknum();
}

char * Contacts::getnum()
{
	char *s=N1.getmobilenum();
	return s;
}
char * Contacts::getothernum()
{
	return other;
}

char * Contacts::gethomenum()
{
	char *s=N1.gethomenum();
	return s;
}
char * Contacts::getworknum()
{
	char *s=N1.getworknum();
	return s;
}

char * Contacts::getname()
{
	char *s=N.getname();
	return s;
}

char *Contacts::getpostaladdress()
{
	return postaladdress;
}

char *Contacts::getemailid()
{
	return emailid;
}