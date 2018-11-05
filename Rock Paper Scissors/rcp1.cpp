// Michaela Vuklisevicova
// COMSC 110, Assignment 7.8, The Rock-Paper-Scissors Game, v.1.0

// libraries
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main()
{	
	srand(time(0));
	
	// variables
	int compScore = 0;
	int playerScore = 0;
	
	while (true)
	{
		// Generating computer's choice
		int compChoice = rand() % 3;
		
		// Getting user's choice and outputing it
		char playerChoice = 'Q';
		cout << "Choose one: Rock (R), Paper (P), Scissors (S), or Quit (Q): ";
		cin >> playerChoice;
		cin.ignore (1000, 10);
		
		if (playerChoice == 'Q' || playerChoice == 'q') break;
		
		int playerNumber = 0;
		cout << "Player: ";
		
		if (playerChoice == 'R' || playerChoice == 'r') 
		{
			cout << "Rock,	";
			playerNumber = 0;
		}
		if (playerChoice == 'P' || playerChoice == 'p') 
		{
			cout << "Paper,	";
			playerNumber = 1;
		}
		if (playerChoice == 'S' || playerChoice == 's') 
		{
			cout << "Scissors,	";
			playerNumber = 2;
		}
		
		cout << "Computer: ";
		
		if (compChoice == 0) cout << "Rock,	";
		if (compChoice == 1) cout << "Paper,	";
		if (compChoice == 2) cout << "Scissors,	";
		
		// Winner
		if (playerNumber == compChoice) 
		{
			cout << "Tie!" << endl;
			cout << endl;
		}
		if (playerNumber == 0 && compChoice == 1) 
		{	
			cout << "Computer wins!" << endl;
			compScore++;
		}
		if (playerNumber == 0 && compChoice == 2) 
		{	
			cout << "Player wins!" << endl;
			cout << endl;
			playerScore++;
		}
		if (playerNumber == 1 && compChoice == 0) 
		{	
			cout << "Player wins!" << endl;
			cout << endl;
			playerScore++;
		}
		if (playerNumber == 1 && compChoice == 2) 
		{	
			cout << "Computer wins!" << endl;
			cout << endl;
			compScore++;
		}
		if (playerNumber == 2 && compChoice == 0) 
		{	
			cout << "Computer wins!" << endl;
			cout << endl;
			compScore++;
		}
		if (playerNumber == 2 && compChoice == 1) 
		{	
			cout << "Player wins!" << endl;
			cout << endl;
			playerScore++;
		}
	
	} // while
	
	cout << "Computer score: " << compScore << endl;
	cout << "Player score: " << playerScore << endl;
	cout << "To close the program, press Enter.";
	cin.get();

	return 0;
	} // main
