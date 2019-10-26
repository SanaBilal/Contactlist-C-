#include"numbers.h"
#include"name.h"
#ifndef CONTACTS_H
#define CONTACTS_H
class Contacts
{
	char postaladdress[15];
	char emailid[30];
	char other[25];
	Numbers N1;
	Name N;
	public:
    Contacts();
	void input();
	void output();
	char * getname();
	char * getnum();
	char * gethomenum();
	char * getworknum();
	char * getothernum();
	char * getpostaladdress();
	char * getemailid();
	char getalphabet();
	char getlastalphabet();
	void indexing();
	void delnum();
	void delhomenum();
	void delworknum();
	
};
#endif;
