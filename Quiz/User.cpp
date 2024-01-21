#include <iostream>
#include "User.h"
using namespace std;

User::User() {}
User::User(string, string, string, int) {}
User::~User() {}

void User::prew_test() {}
void User::new_test() {}



string User::getname() {
	return name;
}
string User::getsurname() {
	return surname;
}
string User::getaddress() {
	return address;
}
int User::getnumber() {
	return number;
}
string User::getlogin() {
	return login;
}
string User::getpassword() {
	return password;
}

string User::setname(string newname) {
	name = newname;
}
string User::setsurname(string newsurname) {
	surname = newsurname;
}
string User::setaddress(string newaddress) {
	address = newaddress;
}
int User::setnumber(int newnumber) {
	number = newnumber;
}
string User::setlogin(string newlogin) {
	login = newlogin;
}
string User::setpassword(string newpassword) {
	password = newpassword;
}