#include <iostream>
#include "User.h"
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	vector<User> users;
	while (true)
	{
		User a("Camal", "Babayev", "Address", "88005553535");

		cout << a.getpassword() << endl;
	}
}