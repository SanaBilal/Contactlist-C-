#include<iostream>
#include<cstring>
#include"list.h"
#include"contacts.h"
using namespace std;

List::List(int a)
{
	listlength=a;
	noofcontacts=0;
	list=new Contacts[a];
}

List List::operator+(Contacts C)
{
	if(noofcontacts<listlength)
	{
		list[noofcontacts].input();
		noofcontacts++;
	}
	else
	{
		doublesize();
	}
	cout<<"listlength "<<listlength<<endl;
	return *this;
}

void List::doublesize()
{
	Contacts *temp=new Contacts[2*listlength];
	for(int i=0;i<listlength;i++)
	{
		temp[i]=list[i];
	}
	delete[] list;
	listlength=listlength*2;
	list=new Contacts[listlength];
	for(int i=0;i<listlength/2;i++)
	{
		list[i]=temp[i];
	}
	//delete[] temp;
	list[noofcontacts].input();
	noofcontacts++;
}


List List::operator-()
{   if(noofcontacts<listlength/2)
	{   int size=listlength/2;
		Contacts *Temp=new Contacts[size];
		for(int i=0;i<size;i++)
		{
			Temp[i]=list[i];
		}
		delete[] list;
		listlength=listlength/2;
		list=new Contacts[listlength];
		for(int i=0;i<listlength/2;i++)
		{
			list[i]=Temp[i];
		}
	}
	cout<<"Whether you want to delete by name or by number"<<endl;
	cout<<"Enter (1) if by name and (2) if by number"<<endl;
	int x;
	cin>>x;
    if(x==1)
	{
		cout<<"Enter Name whose contact you want to remove"<<endl;
		char givenname[25];
		cin.ignore(1);
		cin.getline(givenname,25);
		char *q;
		int z;
		for(int i=0;i<noofcontacts;i++)
		{
			q=list[i].getname();
			z=strcmp(q,givenname);
			if(z==0)
			{
				indexing(i);
			}
		}
	}
	if(x==2)
	{
		cout<<"Enter which number you want to be removed"<<endl;
		char y;
		cout<<"Enter 'm' for mobilenum"<<" 'h' (homenum)"<<" 'w' (worknum)"<<endl;
		cin>>y;
		if(y=='m')
		{   cout<<"Enter number"<<endl;
		    char number[25];
			cin.ignore(1);
			cin.getline(number,25);
			char *q;
			for(int i=0;i<noofcontacts;i++)
			{   q=list[i].getnum();
				if(strcmp(q,number)==0)
				{
					deletenum(i);
				}
			}
		}
		if(y=='h')
		{   cout<<"Enter number"<<endl;
		    char number[25];
			cin.ignore(1);
			cin>>number;
			char *q;
			for(int i=0;i<noofcontacts;i++)
			{   q=list[i].gethomenum();
				if(strcmp(q,number)==0)
				{
					deletehomenum(i);
				}
			}
		}
		if(y=='w')
		{   cout<<"Enter number"<<endl;
		    char number[25];
			cin.ignore(1);
			cin>>number;
			char *q;
			for(int i=0;i<noofcontacts;i++)
			{   q=list[i].getworknum();
				if(strcmp(q,number)==0)
				{
					deleteworknum(i);
				}
			}
		}
	}
	cout<<"listlength "<<listlength<<endl;
 return *this;
}

void List::search()
{   cout<<"Enter if you want to search by cahracter or number"<<endl;
    cout<<"Enter (3) for character and (4) for number"<<endl;
	int l;
	cin>>l;
	if(l==3)
	{
		cout<<"Enter character"<<" first alphabet or last alphabet"<<endl;
		char alphabet;
		cin>>alphabet;
		for(int i=0;i<noofcontacts;i++)
		{   char a=list[i].getalphabet();
			char b=list[i].getlastalphabet();
			if(alphabet==a || alphabet==b)
			{
				list[i].output();
				cout<<endl;
			}
		}
	}
	if(l==4)
	{
		cout<<"Enter one of the numbers"<<endl;
		char numb[25];
		cin.ignore(1);
		cin.getline(numb,25);
		char *s;
		char *z;
		char *u;
		char *k;
		int a,b,c,d;
		for(int i=0;i<noofcontacts;i++)
		{   s=list[i].getnum();
		    z=list[i].gethomenum();
			u=list[i].getworknum();
			k=list[i].getothernum();
			a=strcmp(numb,s);
			b=strcmp(numb,z);
			c=strcmp(numb,u);
			d=strcmp(numb,k);
			if(a==0 || b==0 || c==0 || d==0)
			{
				list[i].output();
				cout<<endl;
			}
		}
	}
}

void List::indexing(int a)
{   
	int s=a+1;
	for(int j=a;j<noofcontacts-1;j++)
	{
		list[j]=list[s];
		s++;
	}
	list[s-1].indexing();
	noofcontacts--;
}

void List::deletenum(int a)
{
	list[a].delnum();
}

void List::deletehomenum(int a)
{
	list[a].delhomenum();
}

void List::deleteworknum(int a)
{
	list[a].delworknum();
}

void List::output()
{
	cout<<endl;
	for(int i=0;i<noofcontacts;i++)
	{
		list[i].output();
		cout<<endl;
	}
}

int List::getlistlength()
{
	return listlength;
}

int List::getnoofcontacts()
{
	return noofcontacts;
}
