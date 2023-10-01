# include <iostream>
# include <vector>
# include <string>

#include "Company.h"
/*
g++ _4.cpp Company.cpp -o _4
./_4
*/

int main() {
    // Create employees
    Company::Employee emp1(" Alice ", 1);
    Company::Employee emp2(" Bob", 2);
    Company::Employee emp3(" Charlie ", 3);
    Company::Employee emp4(" Elsa ", 4);

    // Create departments and add employees
    Company::Department hr(100, "HR");
    hr.addEmployee(emp1);
    hr.addEmployee(emp2);

    Company::Department engineering(101, " Engineering ");
    engineering.addEmployee(emp3);
    engineering.addEmployee(emp4);

    // Create a company and add departments
    Company myCompany(" MyCompany ");
    myCompany.addDepartment(hr);
    myCompany.addDepartment(engineering);

    // Display company information
    myCompany.show();

    return 0;
}