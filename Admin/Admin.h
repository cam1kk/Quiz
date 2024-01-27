#pragma once
#include <iostream>
using namespace std;

class Admin {
private:
    string username;
    string password;
public:
    Admin(const string& username, string& password);

    void displayMenu() const;
    void takeTest() const;
    void viewResults() const;

    void manageUsers();
    void viewStatistics();
    void manageTesting();
};