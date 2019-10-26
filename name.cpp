#include<iostream>
#include"name.h"
using namespace std;

Name::Name()
{
	nameofperson[0]='\0';
}

void Name::input()
{
	cout<<"Enter name of person"<<endl;
	cin.ignore(1);
	cin.getline(nameofperson,25);
}

char Name::getalphabet()
{
	char alpha=nameofperson[0];
	return alpha;
}

char Name::getlastalphabet()
{
	int s=strlen(nameofperson);
	char alpha=nameofperson[s-1];
	return alpha;
}

void Name::indexing()
{
	nameofperson[0]='\0';
}
char * Name::getname()
{
	return nameofperson;
}
