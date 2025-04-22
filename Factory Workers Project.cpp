
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    employee bawb("bawb", "10111", "June 9th, 1969");
    employee aub("baub", "10231", "December 3rd, 2007");
    employee auwb("Bauwb", "12321", "October 31st, 2000");
    employee AAAAAAAAAAAAAAAWWWWWWWWWB("BAAAAAAAAAAAAAAAWWWWWWWWWB", "99999", "January 1st, 1950");
    productionWorker baub(aub.getName(), aub.getEmployeeNumber(), aub.getHireDate(), 20.50, 2);
    ShiftSupervisor Bauwb(auwb.getName(), auwb.getEmployeeNumber(), auwb.getHireDate(), 202000.22, 489);
    TeamLeader BAAAAAAAAAAAAAAAWWWWWWWWWB(AAAAAAAAAAAAAAAWWWWWWWWWB.getName(), AAAAAAAAAAAAAAAWWWWWWWWWB.getEmployeeNumber(), AAAAAAAAAAAAAAAWWWWWWWWWB.getHireDate(), 400000.12, 70, 80);

    bawb.printEmployee();
    baub.printProductionWorker();
    Bauwb.printShiftSupervisor();
    BAAAAAAAAAAAAAAAWWWWWWWWWB.PrintTeamleader();



}
