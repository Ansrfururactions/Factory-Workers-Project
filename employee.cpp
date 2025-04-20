#include "employee.h"

employee::employee(string n, string EN, string HD): name(n), employeeNumber(EN), hireDate(HD)
{

}

void employee::setName()
{

}

void employee::setEmployeeNumber()
{

}

void employee::setHireDate()
{

}

void employee::printEmployee()
{
	cout << name << ". " << employeeNumber << ", " << hireDate << endl;
}

productionWorker::productionWorker(double HPR, int S) : hourlyPayRate(HPR), shift(S)
{

}

void productionWorker::setHourlyPayRate()
{

}

void productionWorker::setShift()
{

}

void productionWorker::printProductionWorker()
{
	printEmployee();
	cout << hourlyPayRate << ", " << shift << endl;
}

ShiftSupervisor::ShiftSupervisor(double AS, double APB): annualSalary(AS), annualProductionBonus(AS)
{

}
void ShiftSupervisor::setAnnualSalary()
{

}
void ShiftSupervisor::printShiftSupervisor()
{
	printEmployee();
	cout << annualSalary << ", " << annualProductionBonus << endl;
}
TeamLeader:: TeamLeader(double MB, int RTH, int ATH): MonthlyBonus(MB), RequiredTrainingHours(RTH), AttendedTrainingHours(ATH)
{

}
void TeamLeader::setMonthlyBonus()
{

}
void TeamLeader::setRequiredTrainingHours()
{

}
void TeamLeader::setAttendedTrainingHours()
{

}
void TeamLeader::PrintTeamleader()
{
	printProductionWorker();
	cout << MonthlyBonus << ", " << RequiredTrainingHours << ", " << AttendedTrainingHours << endl;
}
