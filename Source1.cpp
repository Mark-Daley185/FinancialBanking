#include <iostream>
using namespace std;
#include "Header.h"
//Default constructor
interestCalc::interestCalc() {
    initialDep = 0;
    monthlyDep = 0;
    interest = 0;
    years = 0;
}

//Defining setter and getter methods
int interestCalc::getInitDep() {
    return initialDep;
}

void interestCalc::setInitDep(int initDepAmount) {
    initialDep = initDepAmount;
}

int interestCalc::getMonthlyDep() {
    return monthlyDep;
}

void interestCalc::setMonthlyDep(int monthDepAmount) {
    monthlyDep = monthDepAmount;
}

double interestCalc::getInterest() {
    return interest;
}

void interestCalc::setInterest(double intAmount) {
    interest = intAmount;
}

int interestCalc::getYears() {
    return years;
}

void interestCalc::setYears(int yearAmount) {
    years = yearAmount;
}

//Defining method to display financial information with additional deposits
void interestCalc::balanceWithDeposit(int monthlyDeposit, double initialDeposit, double percentInterest, int numOfYears) {
    cout << "Balance and Interest With Monthly Deposit" << endl;
    cout << "******************************************" << endl;
    double interestEarn;
    double closingBal;
    for (int i = 0; i < numOfYears; i++) {
        interestEarn = (initialDeposit + monthlyDeposit) * ((percentInterest / 100)) / 12;
        closingBal = initialDeposit + monthlyDeposit + interestEarn;
        cout << "Year: " << i + 1 << endl;
        cout << "Year End Earned Interest = " << interestEarn << endl;
        cout << "Year End Balance = " << closingBal << endl;
        initialDeposit = closingBal;

    }
}

//Defining method to display financial information without additional monthly deposits
void interestCalc::balanceWithoutDeposit(double initialDeposit, double percentInterest, int numOfYears, double monthlyDeposit) {
    cout << "Balance and Interest Without Monthly Deposit" << endl;
    cout << "*********************************************" << endl;
    double interestEarn;
    double closingBal;
    for (int i = 0; i < numOfYears; i++) {
        interestEarn = initialDeposit * (((percentInterest / 100)) / 12);
        closingBal = initialDeposit + interestEarn;
        cout << "Year: " << i + 1 << endl;
        cout << "Year End Earned Interest = " << interestEarn << endl;
        cout << "Year End Balance = " << closingBal << endl;
        initialDeposit = closingBal;
    }


}