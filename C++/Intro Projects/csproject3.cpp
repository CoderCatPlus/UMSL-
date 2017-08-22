// a program to determine interest earned 
// megann welch
// also trying out new things with my comments

#include <iostream> //needed for cin and cout MW
#include <cmath> //needed for powers MW
#include <iomanip> //to help with decimals MW
using namespace std;

int main ()
{
    double principal, interestRate, timesInterestCompounded;
		string firstName,lastName; 
		
		cout << "What is your first name?";
		cin >> firstName; //getting name MW
		cout << "what is your last name?";
		cin >> lastName; //getting last name MW
		cout << "You have entered " << firstName <<" " << lastName<< endl ; 
		// checking my work MW
		cout << "Please enter the balance in your savings account."<< endl ;
		cin >> principal; //getting prinicpal MW
    cout << "Please enter the interest rate for your savings account"
		<< endl;
		cin >> interestRate; //getting interest rate MW
		cout << "Please enter the number of times your interest is compounded" <<
		" per year."<< endl; 
		cin >> timesInterestCompounded; //getting number to compound MW
		cout << "You have entered " <<principal<< " for the principal," << " "
		<< interestRate << " for the interest rate, and " << timesInterestCompounded
		<< " for the number of times it's compounded." <<endl;
		// checking my work MW 
		cout << "The report on " << firstName << " " <<lastName<< "'s savings is as"
  	<< " follows:"<< endl ;
    cout << setprecision(2) << fixed << showpoint;
		// trying to make numbers look right MW 
		cout << "Interest Rate: " << interestRate << "%" <<endl;
		cout << "Times Compounded: " <<timesInterestCompounded << endl;
		cout << "Principal: $ " << principal<< endl;
    cout << "Amount in Savings: $ "
		<<principal*pow(1+interestRate/timesInterestCompounded, timesInterestCompounded)<< endl; 
    //computing interest earned MW
		// I do think the math is right on this MW 
		return 0;
}		
