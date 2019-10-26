#include<iostream>
#include"contacts.h"
#include"list.h"
using namespace std;
void menu(List L1,Contacts C);

int main()
{
	cout<<"                         CONTACT LIST                 "<<endl;
	cout<<endl;
	cout<<"Enter"<<" + "<<"if you want to add new contact"<<endl;
	cout<<"Enter"<<" - "<<"if you want to delete existing contact"<<endl;
	cout<<"Enter"<<" s "<<"if you want to search for an existing contact"<<endl;
	cout<<"Enter"<<" q "<<"if you want to quit the program"<<endl;
	cout<<endl;
	List L1(1);
	Contacts C;
	menu(L1,C);
}

void menu(List L1,Contacts C)
{   
	
	char x;
	cin>>x;
	if(x=='+')
	{
		L1.operator+(C);
		cout<<endl;
		menu(L1,C);
	}
	if(x=='-')
	{
		L1.operator-();
		cout<<endl;
		menu(L1,C);
	}
	if(x=='s')
	{
		L1.search();
		menu(L1,C);
	}
	if(x=='q')
	{   L1.output();
		cout<<"PROGRAM TERMINATED"<<endl;
	}

}