#include "Student.hpp"
#include <iostream>


Student::Student(){std::cout << "Object Created!" << std::endl;}
Student::~Student(){std::cout << "Object Destroyed!" << std::endl;}

void Student::setName(std::string& s){name = s;}
void Student::setAge(int i){age = i;}

std::string Student::getName()const{return name;}
int Student::getAge()const{return age;}

