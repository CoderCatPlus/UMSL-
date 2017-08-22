// CS Project 2 MWelch
// a program to determine stock commisions 
#include <iostream> 
using namespace std; 

int main ()
{
   double stock_alone, commision, total_paid;
	 stock_alone = 35.00 * 750;  // 750 shares at 35 dollars a share
	 commision = (35.00 * 750) * 0.02; // trying to get 2 percent of stock total
	 total_paid = commision + stock_alone; //price of stock with commision 
	 cout << "The amount paid for the stock alone is " << stock_alone<<
   " dollars."<< endl;
   cout << "The amount of the commision is " << commision << " dollars."<< endl;
	 cout << "The total paid is " << total_paid <<  " dollars."<< endl;
	 }
