#include "Category.h"
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

Category::Category(string name) {

}

void Category::addTest(Test test) {
	tests.push_back(test);
}

string Category::getCategoryName() {
	return categoryName;
}
void Category::setCategoryName(string newname){
	categoryName = newname;
}

void Category::saveToFile() {
	fstream file("../Category.txt", ios::out | ios::app | ios::binary);
	int
}
void Category::loadFromFile() {

}