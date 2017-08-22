//programn to determine calories burned
//Megann Welch
#include <iostream>
using namespace std; 

int main ()
{
	int count;
	double calories =3.6;
	cout << "Running on this treadmill burns 3.6 calories per ";
	cout << "minute." <<endl;
	//for loop to do calories and minute count
	// start with 30 minutes count back by fives print calories burned
	for (count = 30; count > 0 ;count-- )
	{
		if ( count %5 != 0 );
		else
		{
			cout<< "If you run " <<count<< " minutes, you will burn ";
			cout<< calories * count<< " calories."<<endl;
		}
	}	
	return 0;
}	
