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
	cout << getName() << ". " << getEmployeeNumber() << ", " << getHireDate() << endl;
}

employee::~employee()
{
}

productionWorker::productionWorker(string name, string employeeNumber, string hireDate, double HPR, int S) : employee(name, employeeNumber, hireDate), hourlyPayRate(HPR), shift(S)
{

}

void productionWorker::setHourlyPayRate()
{
	if (hourlyPayRate <= 0)
	{
		hourlyPayRate = 10000.00;
	}
}

void productionWorker::setShift()
{
	if (shift  == 1)
	{
		cout << "this employee works the day shift" << endl;
	}
	else if (shift == 2)
	{
		cout << "this employee works the night shift" << endl;
	}
	else
	{
		cout << "invalid number" << endl;  
	}
}

void productionWorker::printProductionWorker()
{
	printEmployee();
	cout << hourlyPayRate << ", " << shift << endl;
}

productionWorker::~productionWorker()
{
}

ShiftSupervisor::ShiftSupervisor(string name, string employeeNumber, string hireDate, double AS, double APB):employee(name, employeeNumber, hireDate), annualSalary(AS), annualProductionBonus(AS)
{

}
void ShiftSupervisor::setAnnualSalary()
{
	if (annualProductionBonus <= 0)
	{
		annualProductionBonus = 365.00;
	}
}
void ShiftSupervisor::printShiftSupervisor()
{
	printEmployee();
	cout << annualSalary << ", " << annualProductionBonus << endl;
}
ShiftSupervisor::~ShiftSupervisor()
{
}
TeamLeader:: TeamLeader(string name, string employeeNumber, string hireDate, double MB, int RTH, int ATH): productionWorker(name, employeeNumber, hireDate), MonthlyBonus(MB), RequiredTrainingHours(RTH), AttendedTrainingHours(ATH)
{

}
void TeamLeader::setMonthlyBonus()
{
	if (MonthlyBonus <= 0)
	{
		MonthlyBonus = 10.5;
	}
}
void TeamLeader::setRequiredTrainingHours()
{
	if (RequiredTrainingHours <= 0)
	{
		RequiredTrainingHours = 9001;
	}
}
void TeamLeader::setAttendedTrainingHours()
{
	if (AttendedTrainingHours < RequiredTrainingHours)
	{
		cout << "employee requires more training" << endl;
	}
}
void TeamLeader::PrintTeamleader()
{
	printProductionWorker();
	cout << MonthlyBonus << ", " << RequiredTrainingHours << ", " << AttendedTrainingHours << endl;
}

TeamLeader::~TeamLeader()
{
}
