#include <iostream>
#include <time.h>
#include "User.h"
using namespace std;

User::User(string name, string surname, string address, string phone) :
	name(name),surname(surname),address(address),phone(phone) 
{}


void User::generatelogin(string name, string surname) {
	srand(time(NULL));
	char tmp[4];
	for (int i = 0; i < 3; i++)
	{
		tmp[i] = char(rand() % 10 + '0');
	}
	tmp[3] = '\0';
	login = name + surname.substr(0, 1) +
		surname.substr(surname.length() - 1, surname.length()) +
		"_" + tmp;
}
bool User::isUser(User user, vector<User> users) {
	if (!users.empty()) {
		for (int i = 0; i < users.size(); i++)
		{
			if (user.login == users[i].login) {
				return true;
			}
		}
	}
	else {
		return false;
	}
	return false;
}

string User::getname() { return name; }
string User::getsurname() { return surname; }
string User::getaddress() { return address; }
string User::getphone() { return phone; }
string User::getlogin() { return login; }
string User::getpassword() { return password; }

void User::setname(string name) { this->name = name; }
void User::setsurname(string surname) { this->surname = surname; }
void User::setaddress(string address) { this->address = address; }
void User::setphone(string phone) { this->phone = phone; }
void User::setlogin(string login) { this->login = login; }
void User::setpassword(string password) { this->password = password; }