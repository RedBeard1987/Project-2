#ifndef BankingApp
#define BankingApp

*Project 2 - Airgead Banking App
* This is the header file for the banking app
*/

class Bank {
public:
	//setters
	void setInitialInvestment(double initialDeposit);
	void setMonthlyDeposit(double monthlyDeposit);
	void setNumYears(int numYears);
	void setInterest(double interest);
	
	//getters
	double getInitialInvestment() const;
	double getMonthlyDeposit() const;
	int getNumYears() const;
	double getInterest() const;

private:
	//private variables
	double initialInvestment;
	double monthlyDeposit;
	int numYears;
	double interest;

};
#endif
