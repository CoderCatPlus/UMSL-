//Megann Welch 
//header file for car class in racing 
//program
#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car
{
	private:
		string driver; //name of driver
		int maxTravelDistPerSecond;
		int distTraveled; 
		int raceWon;
		//all private because I don't want a user to screw these up

	public:
		//things ppl can use to do stuff with this class
		Car( string nope);
		void resetCar();
		void toString(int);
		int showDistance (int, int);
		void driverStats();
		string getdriver();
		void setdriver();
		int getwon();
		int getdistance();
		 Car  operator++ (int);
		 int randomNum(int);
		int getSpeed ();
		//other things if needed...

};
#endif
