#include <iostream>
#include <random>
#include <string>
#include <time.h>
#include "User.h"
using namespace std;

User::User(string name, string surname, string address, string phone) :
	name(name),surname(surname),address(address),phone(phone) 
{
	generatelogin(name, surname);
	generatepassword();
}


void User::generatelogin(string name, string surname) {
	random_device dev;
	mt19937 rng(dev());
	uniform_int_distribution<mt19937::result_type> dist(1, 10);
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
void User::generatepassword() {
	const string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	for (int i = 0; i < 10; i++) {
		int randomIndex = rand() % chars.length();
		password += chars[randomIndex];
	}
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

//
bool User::isUser(vector<User> users) {
	for (int i = 0; i < users.size(); i++)
	{
		if (getlogin() == users[i].getlogin()) {
			return true;
		}
	}
	return false;
}