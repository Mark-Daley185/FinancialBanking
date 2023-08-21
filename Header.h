#pragma once
#include <iostream>
using namespace std;

class interestCalc {
    //Initializing methods to use with interestCalc objects and initializing private variables that will be used within methods
public:
    void balanceWithDeposit(int monthylDeposit, double initialDeposit, double percentInterest, int numOfYears);
    void balanceWithoutDeposit(double initialdDeposit, double percentInterest, int numOfYears, double monthlyDeposit);
    interestCalc();
    int getInitDep();
    void setInitDep(int initDepAmount);
    int getMonthlyDep();
    void setMonthlyDep(int monthDepAmount);
    double getInterest();
    void setInterest(double intAmount);
    int getYears();
    void setYears(int yearAmount);
private:
    int initialDep;
    int monthlyDep;
    double interest;
    int years;

};