#include <string>
#include <vector>
#include <iostream>

#include "Company.h"

Company::Employee::Employee(const std::string& name, int id) {}
void Company::Employee::show() const {}

Company::Department::Department(int id, const std::string& name) {}
void Company::Department::addEmployee(const Employee& employee) {}
void Company::Department::show() const {}

Company::Company(const std::string& name) {}
void Company::addDepartment(const Department& department) {}
void Company::show() const {}