// program to calculate the amount of fat in food
//Megann WElch

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	char  meal;
	double calories, fat, fatCalories, fatPercent;
	// request calories and fat grams in food
	cout<< "How many calories are in disgraceful meal you are about to consume?";
	cout<< endl;
	cin>> calories;
	cout<< "And exactly how many grams of repulsive fat are in it?" <<endl;
	//flair 
	cin >> fat;
	//now we test fat and calories
	if (calories <= 0)
	{
		cout<< "Fool! Water is not a meal, find something with calories."<<endl;
		return 1;
	}
	else if ((fat <= 0) || (fat > calories)) 
	{
		cout<< "Fool of a took, your fat content is impossible!"<<endl;
		return 1;
	}
	else 
	{
		cout<< "Very well, I shall accept you answers... for now."<< endl;
	}	
	//answers check out now we do math
	fatCalories = fat * 9;
	fatPercent = fatCalories / calories;
	//cout << fatPercent << endl; 
	// commented out, only used for testing
	// now to deal with what meal this is
	cout<< "Please enter the letter associated with your meal;"<<endl;
	cout<< " B - Breakfast"<< endl <<"L - Lunch"<<endl <<"D - Dinner"<<endl;
	cin >> meal;
	// check if they picked from the menu
	switch (meal)
	{
		case 'b' :
		case 'B' : if (fatPercent <= 10)
								{
									cout << "This meal is low in fat content for Breakfast."<<endl;
								}
							else 
							{
								cout << "This food has a questionable fat content for Breakfast, try another meal."<<endl;
								
							}
							break;
		case 'l' :
		case 'L' : if (fatPercent <= 20)
							 {
							 		cout<< "This is a low fat lunch."<<endl;
								}	
							else 
							{
								cout<< "Have you thought about something less fatty for lunch?"<<endl;
							
							}
							break;
		case 'd' :
		case 'D' : if (fatPercent <= 30) 
								{
									cout<< "An excellent choice for dinner my good sir!"<<endl;
								}
							else 
							{
								cout << "Candy is not an acceptable dinner."<<endl;

							}
							break;
		default : cout << "You did not pick a meal from the choices please run the program again."<<endl;
							return 1;
	}	
	// that craziness decides if the the meal is lowfat
	// now we tell them about the math 
	cout<< "Your meal contains " << calories<< " calories." <<endl;
	cout<< "You have " << fat<< " grams of fat."<< endl;
	cout<< setprecision(2)<< showpoint<< endl;
	cout<< "This meal has " <<(fatPercent*10)<< "% of calories from fat."<<endl;
	
	return 0;


}

