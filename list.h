#include "contacts.h"
class List
{
	int listlength;
	int noofcontacts;
	Contacts *list;
	public:
	List(int);
	List operator+(Contacts);
	List operator-();
	void search();
	void output();
	void doublesize();
	void deletenum(int a);
	void deletehomenum(int a);
	void deleteworknum(int a);
	void indexing(int a);
	int getlistlength();
	int getnoofcontacts();
};