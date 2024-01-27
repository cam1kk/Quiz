#pragma once
#include <iostream>
using namespace std;

class User {
private:
    string username;
    string password;
    string fullName;
    string address;
    string phone;
public:
    User(const string& username, const string& password, const string& fullName,
        const string& address, const string& phone);

    ~User();

    const string& getUsername() const;
    const string& getPassword() const;
    const string& getFullName() const;
    const string& getAddress() const;
    const string& getPhone() const;

    virtual void displayMenu() const = 0;
    virtual void takeTest() = 0;
    virtual void viewResults() const = 0;

};