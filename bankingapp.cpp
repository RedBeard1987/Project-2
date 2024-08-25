*Project 2 - AirGead Banking App
* This is the banking app funtions file.
*/
#include <iostream>
#include <iomanip>
#include "Banking.h"

using namespace std;

double initialInvestment = 0.0;
double monthlyDeposit = 0.0;
int numYears = 0;
double interest = 0.0;


//setters
void Bank::setInitialInvestment(double initialDeposit) { // setting Initial deposit from Bank
    this->initialInvestment = initialDeposit;
}

void Bank::setMonthlyDeposit(double monthlyDeposit) { // setting monthly deposit from Bank class
    this->monthlyDeposit = monthlyDeposit;
}

void Bank::setNumYears(int numYears) { // setting numyears from Bank class
    this->numYears = numYears;
}
void Bank::setInterest(double interest) {// setting interest from bank class
    this->interest = interest;
}

//getters
double Bank::getInitialInvestment() const {// get initial investment from bank class
    return initialInvestment;
}

double Bank::getMonthlyDeposit() const { //get monthly deposit from Bank class
    return monthlyDeposit;
}

int Bank::getNumYears() const { //getNumYears from bank class
    return numYears;
}

double Bank::getInterest() const { // getInterest from Bank class
    return interest;
}

double getMonthlyDeposit() { // getting monthly deposit from user
    double monthly;
    cout << "Enter the amount for monthly deposit" << endl;
    cout << "Monthly Deposit: ";
    cin >> monthly;
    while (monthly < 0.00) { // verifing number is positive
        cout << "Invalid amount, amount needs to be positive." << endl;
        cin >> monthly;
    }

    return monthly;
}

double getYears() { // getting number of years from user
    double years;
    cout << "Enter the number of years:";
    cin >> years;
    years = years * 12.00;
    while (years < 0.00) {// verifing number is positive
        cout << "Invalid amount of years, years must be positive." << endl;
        cin >> years;
    }
    return years;
}

double getInitialInvestment() {//getting initial investment amount from user
    double investment;
    cout << "Intial investment amount: $";
    cin >> investment;
    while (investment < 0.00) { // verifing number is positive
        cout << "Invalid amount, amount needs to be positive." << endl;
        cin >> investment;

    }
    return investment;
}

void InitialDisplay() { // intitial display for program
    char x;
    cout << "Initial Investment Amount: " << endl;
    cout << "Monthly Deposit: " << endl;
    cout << "Annual Interest: " << endl;
    cout << "Number of Years: " << endl;
    cout << "Press any key to continue..." << endl;
    cin >> x;

}

double getAnnualInterest() { // getting annual interest from user
    double interest;

    cout << "Annual Interest: %";
    cin >> interest; 
    while (interest < 0.00) { // verifing number is positive
        cout << "Invalid interest amount, interest needs to be positive." << endl;
        cout << "Annual Interest: %";
        cin >> interest;
    }
    return interest;
}

double getTotal() { //calculating total of compound interest and outputting final calculation
    
    double investment = getInitialInvestment(); //calling initial investment function
    double monthly = getMonthlyDeposit(); // calling monthly deposit function
    double years = getYears(); // calling years funtion
    monthly = monthly * years; // setting monthly deposit times years to get total deposit amount
    double interest = getAnnualInterest(); // calling annual interest function
    double compoundInterest = (investment + monthly) * ((interest / 100) / 12) * years; // calculating compound interest over the number of years
    cout << endl; // new line
    cout << "Initial Investment: $" << investment << endl; // output intitial investment
    cout << "Monthly Deposit Total: $" << monthly << endl; // output monthly deposit total over the amount of year
    cout << "Number of Years: " << years / 12 << endl; // out the total amount of years
    cout << "Interest Rate: " << interest << "%" << endl; // output the interest rate
    cout << "Total Interest Earned: $" << compoundInterest << endl; // output the compound interest total earned
    cout << "Total with Earned Interest and Monthly deposit: $" << compoundInterest + investment + monthly << endl; // output total with interest earned
    return 0;
}




int main()
{

    InitialDisplay(); //getting initial display
    getTotal(); // getting total
}
