#pragma once
#include <iostream>
#include <string>
using namespace std;


class employee
{
public:
	string name;
	string employeeNumber;
	string hireDate;
	employee(string n="bob", string EN="11011", string HD="June 9th, 1974");

	void setName();
	void setEmployeeNumber();
	void setHireDate();
	string getName() const {return name;};
	string getEmployeeNumber() const { return employeeNumber;};
	string getHireDate() const { return hireDate; };
	void printEmployee();

	~employee();
};

class productionWorker : public employee {

public:
		double hourlyPayRate;
		int shift;
		productionWorker(string name, string employeeNumber, string hireDate, double HPR=12.5, int S = 1);

		void setHourlyPayRate();
		void setShift();
		double gethourlyPayRate() const { return hourlyPayRate;};
		int getShift() const { return shift; };
		void printProductionWorker();

		~productionWorker();

};

class ShiftSupervisor : public employee {
public:
	double annualSalary;
	double annualProductionBonus;

	ShiftSupervisor(string name, string employeeNumber, string hireDate, double AS = 20000.00, double APB=200.00);
	void setAnnualSalary();
	double getAnnaulSalary() const { return annualSalary; };
	double getAnnualProductionBonus() const { return annualProductionBonus; };
	void printShiftSupervisor();
	~ShiftSupervisor();
};

class TeamLeader : public productionWorker {
public:
	double MonthlyBonus;
	int RequiredTrainingHours;
	int AttendedTrainingHours;

	TeamLeader(string name, string employeeNumber, string hireDate, double MB, int RTH, int ATH);

	void setMonthlyBonus();
	void setRequiredTrainingHours();
	void setAttendedTrainingHours();
	void PrintTeamleader();
	~TeamLeader();
};