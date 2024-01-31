#pragma once
#include <iostream>
using namespace std;

class Test {
private:
    string testName;
    vector<string> questions;
public:
    Test(const string& testName);
    
    void addQuestion(string questionText);

    string getTestName();
    void setTestName(string);

    void saveToFile();
    void loadFromFile();
    //
    // //
};