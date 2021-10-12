#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#define _CRT_SECURE_NO_WARNINGS		// #define and #pragma included to disable a secure warning
#pragma warning(disable:4996)		// given by the use of ctime.


using namespace std;

int main() {

	string workout1;
	string workout2;
	string strengthOrCardio;
	string strength = "strength";
	string cardio = "cardio";
	int strengthOrRun;
	int exerciseAmount;
	int reps;
	int reps2;
	int weight;
	int weight2;
	int choice;
	float distance;
	float runTime;

	time_t now = time(0);		   	//
									// Pulls the local date and time.
	char* dt = ctime(&now);			//

	cout << "Welcome! Todays date and time is " << dt << endl;

	cout << "Will we be tracking strength training or distance running today?" << endl;
	cout << "1. Strength training." << endl << "2. Distane running." << endl;

	cin >> strengthOrRun;

	// Beginning of switch and case to determine amount of exercises and details of those exercises.

	switch (strengthOrRun)
	{
	case 1:
		cout << "How many different workouts will we track?" << endl;

		cin >> exerciseAmount;

		switch (exerciseAmount)
		{
		case 1:
			cout << "What exercise did you do?" << endl;

			cin.ignore();
			getline(cin, workout1);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight >> reps;

			cout << "Exercise: " << workout1 << "." << endl;
			cout << "Weight: " << weight << "." << endl;
			cout << "Reps: " << reps << "." << endl;

			break;
	    case 2:
		cout << "What was your first exercise?" << endl;

		cin.ignore();
		getline(cin, workout1);

		cout << "Please enter weight followed by repitions, separated by a space." << endl;

		cin >> weight >> reps;

		cout << "Please enter your second exercise." << endl;

		cin.ignore();
		getline(cin, workout2);

		cout << "Please enter weight followed by repitions, separated by a space." << endl;

		cin >> weight2 >> reps2;

		cout << "Exercise: " << workout1 << "." << endl;
		cout << "Weight: " << weight << "." << endl;
		cout << "Reps: " << reps << "." << endl;

		cout << "Exercise: " << workout2 << "." << endl;
		cout << "Weight: " << weight2 << "." << endl;
		cout << "Reps: " << reps2 << "." << endl;

		break;
	    }
	}
	system("pause");
	return(0);
}