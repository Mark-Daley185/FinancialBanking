#include "Header.h"
#include <iostream>
using namespace std;

int main()
{
    //Declaring object and variables for user input
    interestCalc myFinance;
    int userInitial;
    int userMonthly;
    double userInt;
    int userYears;
    string cont = "1";

    //Formatting output and taking user input
    cout << "********************" << endl;
    cout << "****Data Input******" << endl;
    cout << "Inital Investment Amount:";
    cin >> userInitial;
    cout << "Monthly Deposit:";
    cin >> userMonthly;
    cout << "Annual Interest:";
    cin >> userInt;
    cout << "Number of Years:";
    cin >> userYears;
    while (cont == "1") {
        cout << "Press \"0\" followed by ENTER key to continue..." << endl;
        cin >> cont;
    }



    //Giving object instances values based on user input
    myFinance.setInitDep(userInitial);
    myFinance.setMonthlyDep(userMonthly);
    myFinance.setInterest(userInt);
    myFinance.setYears(userYears);

    //Outputting all financial information
    cout << "Initial Investment Amount: $" << myFinance.getInitDep() << endl;
    cout << "Monthly Deposit: $" << myFinance.getMonthlyDep() << endl;
    cout << "Annual Interest: " << myFinance.getInterest() << "%" << endl;
    cout << "Number of Years: " << myFinance.getYears() << endl;
    cout << endl;

    myFinance.balanceWithDeposit(userMonthly, userInitial, userInt, userYears);
    cout << endl;
    myFinance.balanceWithoutDeposit(userInitial, userInt, userYears, userMonthly);

    return 0;
}