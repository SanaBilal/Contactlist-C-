#include<iostream>
#include"numbers.h"
using namespace std;

Numbers::Numbers()
{
	mobilenum[0]='\0';
	worknum[0]='\0';
	homenum[0]='\0';
}

void Numbers::input()
{
	cout<<"Enter mobile number of person"<<endl;
	cin>>mobilenum;
	cout<<endl;
	cout<<"Enter work number of person"<<endl;
	cin>>worknum;
	cout<<endl;
	cout<<"Enter home number of person"<<endl;
	cin>>homenum;
}

void Numbers::indexing()
{
	mobilenum[0]='\0';
	homenum[0]='\0';
	worknum[0]='\0';
}
void Numbers::delnum()
{
	mobilenum[0]='\0';
}

void Numbers::delhomenum()
{
	homenum[0]='\0';
}

void Numbers::delworknum()
{
	worknum[0]='\0';
}

char * Numbers::getmobilenum()
{
	return mobilenum;
}

char * Numbers::gethomenum()
{
	return homenum;
}

char * Numbers::getworknum()
{
	return worknum;
}