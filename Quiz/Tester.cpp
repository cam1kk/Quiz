#include <iostream>
#include "User.h"
using namespace std;

int main() {
	vector<User> users;
	string name = "Camal";
	string surname = "Babayev";
	string address = "Address";
	string phone = "88005553535";
	User a("Camal", "Babayev", "Address", "88005553535");
	a.generatelogin(name, surname);
	while (!a.isUser(a,users))
	{
		User b("Camal", "Babayev", "Address", "88005553535");
		b.generatelogin("Camal", "Babayev");
		users.push_back(b);
	}
}