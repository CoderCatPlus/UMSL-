// program to determine magic dates using math
//Megann WElch 

#include <iostream>
using namespace std;

int main ()
{
	int month, day, year;
	cout<< "I will take any date and test for magic with this program!"<<endl;
	cout << "Please enter a month as a number without a zero: ";
	cin >> month;
	cout << "Now enter a date in that month: "<< endl;
	cin>> day;
	cout<< "Now enter the last two digits of a year: "<<endl;
	cin >> year;
	//now that we have the month, day, and year, we test them
	if ((month > 0) && (month <= 12))
	//test month
	{
		if ((day>0) && (day<=31))
		//if month works test day
		{
			if ((year>0) && (year <=99))
			//if month and day work test year
			{
				cout<< "You have entered the "<< month<< " month,";
				cout << "the "<<day<< " day, and the a year ending in "<<year<<".";
				cout<<endl;
			}
		
			else // this else goes with the year
			{
				cout<< "Invalid year. Please run the program again.";
			}
		}		
		//this else goes with the day
		else
		{
			cout<< "Invalid day. You should go look at a calendar and run";
			cout<<" the program again. ";
		
		}
	}
//this else goes with month
	else
	{
		cout << "Aww I'm sorry I asked you all those questions, I didn't know";
		cout<< " you couldn't read."<<endl;
	}

//now we do math to see if it's magic (mm * dd =yy?)
	if ((day * month) == year) 
	{
		cout<< "I do believe in magic! The proof is in your date."<<endl;
	}
	else 
	{
		cout<< "You do not have the magic touch, try another date next time." <<endl;
	}	
	return 0 ;

}


