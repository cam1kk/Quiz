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

}
void Category::loadFromFile() {

}