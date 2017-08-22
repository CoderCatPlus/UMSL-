//Rock Paper Scissor Game
//Megann Welch 
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//prototypes
int menu (int );
int computer ();
int pickWinner (int , int);

//main function

int main()
{
	int playerChoice;
	int computerChoice;

	do 
	{
	cout << "Let's play a game of Rock, Paper, Scissors..."<< endl;
	playerChoice = menu(0 ); //calls menu fuction sets return to playerChoice
	computerChoice = computer() ; //determine computer choice
	pickWinner(playerChoice, computerChoice);
	//call winner function announce winner
	//cout << computerChoice ; //test
	//cout << playerChoice;
	}
	while ( playerChoice != 4); 


	return 0;
}	

// displays menu and returns players choice
int menu (int f)
{
	int something;
	cout << "Please select from the following choices:"<< endl;
	cout << "Rock - 1" <<endl;
	cout << "Paper - 2" <<endl;
	cout << "Scissors - 3"<< endl;
	cout << "Quit - 4" << endl;
	cout << "Your choice: ";
	
	cin >> something;
	return something;
}	


//determines and returns computers choice
int computer ( )
{
	unsigned seed = time(0);
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 3;

	srand(seed); //seed random numbers
	int choice = (rand ( ) % (MAX_VALUE - MIN_VALUE +1 ))+ MIN_VALUE; //attempt at random number


	return choice;
}

// decides winner and tells user
int pickWinner(int player1 , int computer1 )
{
	if (player1 ==4)
	{
	cout << "Thanks for playing puny human.";
	return 0;
	}

		else if ( player1 ==1 && computer1 ==2)
		{
		cout<< "Fear me puny human. The computer wins."<< endl;
		}
		else if ( player1==2 && computer1 ==3) 
		{
		cout << "You have chosen poorly. The machine has won and you have sealed our fate"<<endl; 
		}
		else if (player1 ==3 && computer1 ==1)
		{
		cout<< "The mighty humans have fallen. Fear the rise of the machines." <<endl;
		}														
		else if  (player1 ==2 && computer1 ==1)
		{
		cout <<"Cheer! You have saved the human race." <<endl;
		}
		else if (player1 ==3 && computer1 ==2)
		{
		cout<< "The mighty human has triumphed again."<<endl;
		}
		else if (player1 ==1 && computer1 ==3)
		{
		cout<< "Your computer cowers in fear. The human wins again."<<endl;
		}														
		else if( player1 == computer1)
		{
		cout<< "The two are evenly matched. It's a tie, want to try again?"<< endl;
		}
		
	else
	{
	cout<< "Error."<<endl;
	return 1;
	}
}

