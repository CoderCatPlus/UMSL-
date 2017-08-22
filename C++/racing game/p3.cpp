//Megann Welch 
//program to simulate drag car race
#include <string>
#include <iostream>
#include "car.h"
using namespace std;

void forTesting();
//  
int main()
{
	//forTesting();

	
	//cout<< "this does nothing!"<<endl; //debuging
	
	//make array of so many cars
	int size=2; //could also be a max but this was funnier
	int decoy;

	cout<< "Please enter number of drivers in the drag race."<< endl;
	cin>>decoy;
	if (decoy!=2)
	{
		cout<< "Clearly you failed to recognize a drag race only has two at a time. Uneasy Kibble has corrected your mistake with a woodchipper.";
	}
	
	Car *dragsters[decoy];
	string userName;
	for (int a=0; a<decoy;a++)
	{
		cout<< "Enter name."<<endl;
		cin>>userName;
	//somehow make array of classes
	//	Car dragsters[2]={Car(userName), Car(userName)};
	//get drivers names from user
	//get driver/car info 
	//attempt to ptr to create dynamically sized array	
		dragsters[a]=new Car(userName);
	
	
}	
	int crazyTrack;
	cout<< "Enter unit length of track."<<endl;
	cin>>crazyTrack;
	cout<< crazyTrack<<endl;
	cout<< "It's a lovely day for a race. As the drivers prepare we would like to honor ";
	cout<< "those lost in the previous race. Uneasy Kibble would like to thank you for your sacrifice."<< endl;
	char again;
do
{
		cout<<"3"<< endl;
		cout<<"2"<<endl;
		cout<<"1"<< endl; 
		cout<<"GO!"<< endl;
	//race them in 1 second increments ask user for increments
		char raceSec;
		int winner=0;
		do
		{
			
			for (int su=0; su<decoy;su++)
			{
			cout<<dragsters[su]->getSpeed()<<"sp"<<endl;	
			cout<<dragsters[su]->randomNum(crazyTrack)<<"rand"<<endl;
			(*dragsters[su])++;//doesn't seg fault... set dist to 0 fixed
			cout<<dragsters[su]->getdistance()<<"dist";

			}
	
	//cout<<"this still works"<< endl;
	//show each car in race
			for (int c=0; c< decoy; c++)
			{
				cout<<dragsters[c]->getdistance();
				dragsters[c]->toString(crazyTrack);
				int dist=dragsters[c]->getdistance();
				winner=dragsters[c]->showDistance(dist, crazyTrack);
		//broke member beware possibly fixed
				cout<<dragsters[c]->getdriver();	
				cout<< "winnier"<<winner;	
			}
			
	
			cout<< "Next second? y/n"<< endl;
			cin>> raceSec;
		}while(raceSec!= 'n'&&winner!=1);

		for (int g=0;g<decoy; g++)
		{
			dragsters[g]->resetCar();
			dragsters[g]->driverStats();
		}
		cout << "Race again?"<< endl;
		cin>> again;
}while(again=='y');
	//declare winner
		
	//add to drivers races won stats
	//show drivers stats
	//ask to 
		cout<< "*explosion!*"<<endl;
		cout<< "Oh! and that's a bad miss! It looks as";
		cout<< " though every car has collided with the others in a firey ball of death. As always Uneasy Kibble would like to thank you for your contribution!"<< endl;
	return 0;
}


 
void forTesting()
{
	/*int dist = 0;
	Car mycar("Ricky Bobby");
	cout << mycar.getdriver() <<endl;
	cout<<"dist traveled is: " << mycar.getdistance() <<endl;
	mycar++;
	cout<<"++ worked"<<endl;
	cout<<"\ndist traveled is: " << mycar.getdistance() <<endl;
	cout<<"Calling show dist"<<endl;
	mycar.showDistance(mycar.getdistance() ,200);
	cout << "finished SD"<<endl;
	mycar.showDistance(0 ,200);*/

	int decoy = 2;
	Car *dragsters[decoy];
	string userName;
	for (int a=0; a<decoy;a++)
	{
		cout<< "Enter name."<<endl;
		cin>>userName;
		dragsters[a]=new Car(userName);
	}
	int nowSpeed;
	for(int i = 0; i <decoy;i++)
	{
		cout << "name " << i << " is: " << dragsters[i]->getdriver()<<endl;
		cout << "speed " << i << " is: " <<dragsters[i]->getSpeed() <<endl;
		cout << " dist " <<i<< " is: "<<dragsters[i]->getdistance()<<endl;
		nowSpeed = dragsters[i]->getdistance();
		(*dragsters[i])++;
		cout<< "afta ++" <<endl;

		cout << "now dist " <<i<< " is: "<<dragsters[i]->getdistance()<<endl;
		dragsters[i]->showDistance(dragsters[i]->getdistance(), 200);
		cout<<endl;
	}

}

