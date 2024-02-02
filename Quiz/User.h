#pragma once
#include <iostream>
#include <vector>
using namespace std;

class User {
private:
    string login;
    string password;

    string name;
    string surname;
    string address;
    string phone;
public:
    User(string,string,string,string);

    void generatelogin(string,string);
    bool isUser(User, vector<User>);

    string getname();
    string getsurname();
    string getaddress();
    string getphone();
    string getlogin();
    string getpassword();

    void setname(string);
    void setsurname(string);
    void setaddress(string);
    void setphone(string);
    void setlogin(string);
    void setpassword(string);
};