#ifndef NUMBERS_H
#define NUMBERS_H
class Numbers
{
	char mobilenum[25];
	char worknum[25];
	char homenum[25];
	public:
	Numbers();
	void input();
	void indexing();
	void delnum();
	void delhomenum();
	void delworknum();
	char * getmobilenum();
	char * gethomenum();
	char * getworknum();
};
#endif;