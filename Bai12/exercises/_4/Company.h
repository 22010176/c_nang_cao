#ifndef _COMPANY_
#define _COMPANY_

#include <string>
#include <vector>
#include <iostream>

class Company {
public:
    class Employee {
    private:
        std::string employee_name;
        int employee_id;
    public:
        Employee(const std::string& name, int id);
        void show() const;
    };

    class Department {
    private:
        std::string department_name;
        int department_id;
        std::vector <Employee> employees;

    public:
        Department(int id, const std::string& name);
        void addEmployee(const Employee& employee);
        void show() const;
    };

    Company(const std::string& name);
    void addDepartment(const Department& department);
    void show() const;
private:
    std::string company_name;
    std::vector<Department> departments;
};
#endif