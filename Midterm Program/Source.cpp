#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#define _CRT_SECURE_NO_WARNINGS		// #define and #pragma included to disable a secure warning
#pragma warning(disable:4996)		// given by the use of ctime.


using namespace std;

int main() {

	string workout1, workout2, workout3, workout4, workout5, workout6;
	string strengthOrCardio;
	int strengthOrRun;
	int exerciseAmount;
	int reps1, reps2, reps3, reps4, reps5, reps6;
	int weight1, weight2, weight3, weight4, weight5, weight6;
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

	// Beginning of switch and case to determine type of training and details.

	switch (strengthOrRun)
	{
	case 1:
		cout << "How many different workouts will we track? (6 max)" << endl;

		cin >> exerciseAmount;

		switch (exerciseAmount)
		{
		case 1:
			cout << "What exercise did you do?" << endl;

			cin.ignore();
			getline(cin, workout1);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight1 >> reps1;

			cout << endl << "Exercise: " << workout1 << "." << endl;
			cout << "Weight: " << weight1 << "." << endl;
			cout << "Reps: " << reps1 << "." << endl;

			break;
	    case 2:
		cout << "What was your first exercise?" << endl;

		cin.ignore();
		getline(cin, workout1);

		cout << "Please enter weight followed by repitions, separated by a space." << endl;

		cin >> weight1 >> reps1;

		cout << "Please enter your second exercise." << endl;

		cin.ignore();
		getline(cin, workout2);

		cout << "Please enter weight followed by repitions, separated by a space." << endl;

		cin >> weight2 >> reps2;

		cout << endl << "Exercise: " << workout1 << "." << endl;
		cout << "Weight: " << weight1 << "." << endl;
		cout << "Reps: " << reps1 << "." << endl;

		cout << "Exercise: " << workout2 << "." << endl;
		cout << "Weight: " << weight2 << "." << endl;
		cout << "Reps: " << reps2 << "." << endl;

		break;
		case 3:
			cout << "What was your first exercise?" << endl;

			cin.ignore();
			getline(cin, workout1);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight1 >> reps1;

			cout << "Please enter your second exercise." << endl;

			cin.ignore();
			getline(cin, workout2);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight2 >> reps2;

			cout << "Please enter your third exercise." << endl;

			cin.ignore();
			getline(cin, workout3);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight3 >> reps3;

			cout << endl << "Exercise: " << workout1 << "." << endl;
			cout << "Weight: " << weight1 << "." << endl;
			cout << "Reps: " << reps1 << "." << endl;

			cout << "Exercise: " << workout2 << "." << endl;
			cout << "Weight: " << weight2 << "." << endl;
			cout << "Reps: " << reps2 << "." << endl;

			cout << "Exercise: " << workout3 << "." << endl;
			cout << "Weight: " << weight3 << "." << endl;
			cout << "Reps: " << reps3 << "." << endl;

			break;
		case 4:
			cout << "What was your first exercise?" << endl;

			cin.ignore();
			getline(cin, workout1);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight1 >> reps1;

			cout << "Please enter your second exercise." << endl;

			cin.ignore();
			getline(cin, workout2);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight2 >> reps2;

			cout << "Please enter your third exercise." << endl;

			cin.ignore();
			getline(cin, workout3);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight3 >> reps3;

			cout << "Please enter your fourth exercise." << endl;

			cin.ignore();
			getline(cin, workout4);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight4 >> reps4;

			cout << endl << "Exercise: " << workout1 << "." << endl;
			cout << "Weight: " << weight1 << "." << endl;
			cout << "Reps: " << reps1 << "." << endl;

			cout << "Exercise: " << workout2 << "." << endl;
			cout << "Weight: " << weight2 << "." << endl;
			cout << "Reps: " << reps2 << "." << endl;

			cout << "Exercise: " << workout3 << "." << endl;
			cout << "Weight: " << weight3 << "." << endl;
			cout << "Reps: " << reps3 << "." << endl;

			cout << "Exercise: " << workout4 << "." << endl;
			cout << "Weight: " << weight4 << "." << endl;
			cout << "Reps: " << reps4 << "." << endl;

			break;
		case 5:
			cout << "What was your first exercise?" << endl;

			cin.ignore();
			getline(cin, workout1);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight1 >> reps1;

			cout << "Please enter your second exercise." << endl;

			cin.ignore();
			getline(cin, workout2);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight2 >> reps2;

			cout << "Please enter your third exercise." << endl;

			cin.ignore();
			getline(cin, workout3);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight3 >> reps3;

			cout << "Please enter your fourth exercise." << endl;

			cin.ignore();
			getline(cin, workout4);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight4 >> reps4;

			cout << "Please enter your fifth exercise." << endl;

			cin.ignore();
			getline(cin, workout5);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight5 >> reps5;

			cout << endl << "Exercise: " << workout1 << "." << endl;
			cout << "Weight: " << weight1 << "." << endl;
			cout << "Reps: " << reps1 << "." << endl;

			cout << "Exercise: " << workout2 << "." << endl;
			cout << "Weight: " << weight2 << "." << endl;
			cout << "Reps: " << reps2 << "." << endl;

			cout << "Exercise: " << workout3 << "." << endl;
			cout << "Weight: " << weight3 << "." << endl;
			cout << "Reps: " << reps3 << "." << endl;

			cout << "Exercise: " << workout4 << "." << endl;
			cout << "Weight: " << weight4 << "." << endl;
			cout << "Reps: " << reps4 << "." << endl;

			cout << "Exercise: " << workout5 << "." << endl;
			cout << "Weight: " << weight5 << "." << endl;
			cout << "Reps: " << reps5 << "." << endl;

			break;
		case 6:
			cout << "What was your first exercise?" << endl;

			cin.ignore();
			getline(cin, workout1);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight1 >> reps1;

			cout << "Please enter your second exercise." << endl;

			cin.ignore();
			getline(cin, workout2);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight2 >> reps2;

			cout << "Please enter your third exercise." << endl;

			cin.ignore();
			getline(cin, workout3);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight3 >> reps3;

			cout << "Please enter your fourth exercise." << endl;

			cin.ignore();
			getline(cin, workout4);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight4 >> reps4;

			cout << "Please enter your fifth exercise." << endl;

			cin.ignore();
			getline(cin, workout5);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight5 >> reps5;

			cout << "Please enter your sixth exercise." << endl;

			cin.ignore();
			getline(cin, workout6);

			cout << "Please enter weight followed by repitions, separated by a space." << endl;

			cin >> weight6 >> reps6;

			cout << endl << "Exercise: " << workout1 << "." << endl;
			cout << "Weight: " << weight1 << "." << endl;
			cout << "Reps: " << reps1 << "." << endl;

			cout << "Exercise: " << workout2 << "." << endl;
			cout << "Weight: " << weight2 << "." << endl;
			cout << "Reps: " << reps2 << "." << endl;

			cout << "Exercise: " << workout3 << "." << endl;
			cout << "Weight: " << weight3 << "." << endl;
			cout << "Reps: " << reps3 << "." << endl;

			cout << "Exercise: " << workout4 << "." << endl;
			cout << "Weight: " << weight4 << "." << endl;
			cout << "Reps: " << reps4 << "." << endl;

			cout << "Exercise: " << workout5 << "." << endl;
			cout << "Weight: " << weight5 << "." << endl;
			cout << "Reps: " << reps5 << "." << endl;

			cout << "Exercise: " << workout6 << "." << endl;
			cout << "Weight: " << weight6 << "." << endl;
			cout << "Reps: " << reps6 << "." << endl;

			break;
		default: cout << "Sorry, this program can only handle 6 exercises at the moment. Please try again and enter a number between 1 and 6" << endl;
	    }
		break;
		case 2:
			cout << "How far did you run today? (enter # of miles)" << endl;

			cin >> distance;

			cout << "How many minutes were you running?" << endl;

			cin >> runTime;

			cout << endl << "Distance: " << distance << " Miles" << endl;
			cout << "Duration: " << runTime << " Minutes" << endl;
 
			break;
		default: cout << "Please try again and enter either 1 or 2." << endl;
	}
	
	system("pause");
	return(0);
}