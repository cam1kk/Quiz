#pragma once
#include <iostream>
using namespace std;

class User {
private:
	string name;
	string surname;
	string address;
	int number;
	
	string login;
	string password;
public:
	User();
	User(string, string, string, int);
	~User();

	void prew_test();
	void new_test();

	string getname();
	string getsurname();
	string getaddress();
	int getnumber();
	string getlogin();
	string getpassword();

	string setname(string);
	string setsurname(string);
	string setaddress(string);
	int setnumber(int);
	string setlogin(string);
	string setpassword(string);
};