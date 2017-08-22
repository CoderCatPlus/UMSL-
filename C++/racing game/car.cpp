// Megann Welch 
// Implementation file for Car class.

#include "car.h"
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std; 

Car::Car (string name)
{
	driver=name;
	//attempt to give a driver a name
	maxTravelDistPerSecond=randomNum(100);
	distTraveled=0;
	//set up speed of racecar
	//set cars to the staring line
}

int Car::getSpeed ()
{
	return maxTravelDistPerSecond;
}	
int Car::randomNum(int max)
{
	// attempt to making using random numbers better
	int min=1;
	int random=0;
	unsigned seed =time(0);
	srand(seed);
	random=(rand()%max+min);
	return random;
}	
void Car::resetCar()
{
	distTraveled=0;
	//reset the cars distance
}	

void Car::toString(int goalLength)
{
	//no idea how to do this one
	//somehow draw racetrack with ascii 
	//and scale it!
	//this is what I came up with before we were told to scale it
	//switch (Car.distanceTraveled)
//	{
//		case (Car.distanceTraveled<(goalLength/4)): 
//			cout <<"|-----               |"<< Car.driver<<endl;
//			break;
	//	case (Car.distanceTraveled<(goalLength/2)):
	//		cout << "|--------            |"<< Car.driver<<endl;
	//		break;
	//	case(Car.distanceTraveled==(goalLength/2)):
		//	cout << "|----------          |"<< Car.driver<< endl;
	// and so on, but we were told to try it differently soo....
	// here's differently
//see showDistance for attempt.... 	
	//call some other functions to 
 cout<< "i'm alive!"<< endl; //debuging

 
}

void Car::driverStats()
{
	//display driver name and how many races he's won
	cout<< driver<<" has won "<< getwon()<< endl;
}

void Car::setdriver()
{
	//set drivers names
	cout<< "Please enter drivers name;" << endl;
	cin>>driver;
}	

int Car::showDistance( int traveled, int userTrack)
{
	//array of cars travels and the track
	cout<< "inside showDistance"<<endl;
	int trackSize=101;
	int limit= (((trackSize-1)*traveled)/userTrack); //scaling track for output
	char track[trackSize];
	track[0]='|';
	int won=0;

	for (int first=1; first<trackSize; first++)
	{
		track[first]=' '; //set everything blank
	}	

	 
	
	if (traveled<trackSize)//this is wrong fixed
	{
		for (int dot=1; dot<traveled; dot++)
		{	 	
			track[dot]='-';
			track[dot+1]='>';
		}
		track[trackSize-1]='|';
	}
	else
	{
		for (int over=1; over<trackSize-2; over++)
		{
			track[over]='-';
		}
		track[trackSize-2]='|';
		track[trackSize-1]='>';
		raceWon++;
		won=1;
	}	
	for (int show=0; show<trackSize; show++)
	{
		cout<< track[show];
	}

	return won;
//causes infinite loop fixed
//won't display distance fixed
}


string Car::getdriver()
{
	// get driver
	return driver;
}

int Car::getwon()
{
	//getting races won
	return raceWon;
}
int Car::getdistance()
{
	//getting distance
	return distTraveled;
}
Car Car:: operator++(int)
{
	//attempt to add random numbers to distance traveled to simulate speed variability 
	this->distTraveled=distTraveled+randomNum(maxTravelDistPerSecond);
	cout<<"hello";
	cout<<distTraveled<< endl;
	// causes segfault fixed?
	return *this;
}	
	
