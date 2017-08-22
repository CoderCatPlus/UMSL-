// program to play with arrays with students scores
// Megann Welch 
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const  int  ROWSIZE=3;
const int COLSIZE=5;

// function prototypes
void average_student (const int [][COLSIZE],int );
void average_test (const int [][COLSIZE],int );
void best_score (const int [][COLSIZE],int );
void many_A (const int [][COLSIZE],int );

int main ()
{
ifstream file;
string name;
int students;
int tests;
int scores[ROWSIZE][COLSIZE];
int count=0;

//read in file name
cout << "Enter file name; " << endl;
cin >> name; 
file.open(name.c_str());

// loops  
//put info from file into array
for (students=0; students<COLSIZE; students++)
{
//cout<<students<< endl;
	for (tests=0; tests<ROWSIZE; tests++)
	{
		file>> scores[tests][students];
	}

}

file.close();
//********************
// these loops were used to try to debug
//*********************

//for (int other=0; other<COLSIZE; other++)
//{
//	for( int another=0; another<ROWSIZE; another++)
//	{
//	cout<< scores[another][other]<<endl;
//	}
//}


//use functions to do stuff with array
average_student (scores, ROWSIZE);
average_test (scores, ROWSIZE);
best_score (scores,ROWSIZE);
many_A (scores,ROWSIZE);

return 0;

}

// now a bunch of functions

// *************************************
// This function takes the numbers in the students columns and 
// determines the average
//***************************************
void average_student (const int num [][COLSIZE], int rows)
{
	double total;
	double average;
	for (int col=0; col<COLSIZE; col++)
	{
		total=0;
		for (int row=0;row<ROWSIZE; row++)
		{
			total+= num[row][col];
			//cout<< total<<endl;
		}
			average = total/ROWSIZE;
			
			cout<< "The average for student " << (col +1);
			cout<< " is "<<setprecision(2)<<fixed<<showpoint<< average << endl;
		
	}
}

// function to find the average per test 
void average_test (const int num [][COLSIZE], int rows)
{
	for (int row=0; row<ROWSIZE; row++)
	{
		double total=0;
		double average=0;
		for (int col=0; col<COLSIZE; col++)
		{
			total+= num[row][col];
		//	cout<< total<< endl;
		}	
			average= total/COLSIZE;
			
			cout << "The average for test " << (row+1);
			cout << " is "<< average<< endl;
		
	}	
}

// function to find the highest score
void best_score (const int num[][COLSIZE], int rows)
{
	double best=num[0][0];
	for (int col=0;col<COLSIZE; col++)
	{
		for (int row=0; row<ROWSIZE; row++)
		{
			if( num[row][col]> best)
			{
			best= num[row][col];
			//cout << best<<endl;
			}
		}
	}	
		cout << "The best score was "<<best<<endl;	
		
	
}

//function to see how many A's
void many_A (const int num[][COLSIZE], int rows)
{
	int count=0;
	int row;
	int col;
	for (int col=0; col< COLSIZE; col++)
	{
		for (int row=0; row<ROWSIZE; row++)
		{
			if (num[row][col]>=90)
			{
				count++;
			}
		}	
	}			cout<< "There were " <<count<<" A's in the class."<<endl;
	
}	
