// Lab 4c, Tabular Formatting
// Programmer: Michaela Vuklisevicova 
// Text Editor used: Notepad++ 
// Compiler used: Visual Studio 2015

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// function prototypes
void guess (int random, int user);
int yesOrNo();

int main()
{
  srand(time(0));
  
  // print name assignment's title
  cout << endl;  
  cout << "Lab 4c, Tabular Formatting" << endl; 
  cout << "Programmer: Michaela Vuklisevicova" << endl; 
  cout << "Text Editor used: Notepad++" << endl; 
  cout << "Compiler used: Visual Studio 2015" << endl; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
  
  // variables
  int compGuess = 1 + (rand() % 1000);
  int userGuess;
  char buf[100];
  char answer;
  
  // user's prompt and input
  cout << "I am thinking of a number between 1 and 1000. Guess what what number it is: ";
  cin >> buf; // storing the input in buffer
  cin.ignore (1000, 10);
  userGuess = atoi(buf); // transfering the input value into userGuess variable
  
  guess(compGuess, userGuess); // Calling the guess function and sending two 
  // parameter values for check if the guessed number is the same as the random 
  // number, or wheter it is lower or higher number.
  
  while (yesOrNo() == 1) // if user wants to continue playing, repets the same logic as lines 37-42
  {
	cout << "I am thinking of a number between 1 and 1000. Guess what what number it is: ";
    cin >> buf;
    cin.ignore (1000, 10);
    userGuess = atoi(buf);
	guess(compGuess, userGuess);
  } // while
  
} // main

// function declarations

void guess(int random, int user)
{
  while (true)
  {
	if (random == user) 
	{
	  cout << "Congratulations! That is the number I was thinking about!" << endl;
	  break;
	} // if
	else if (user < random)
	{		
	  cout << "That is too low! Try again!" << endl;
      char buffer[100];
	  cin >> buffer;
	  user = atoi(buffer); continue;
	} // else if
	else if (user > random)
	{		
	  cout << "That is too high! Try again!" << endl;
	  char buf[100];
	  cin >> buf;
	  user = atoi(buf); continue;
	} // else if
  } // while
} // guess

int yesOrNo()
{
  int result;
  char yN;
  cout << "Do you want to continue playing?" << endl;
  while (true)
  {
    cout << "Enter 'Y' for yes, or 'N' for no: ";
    cin >> yN;
    cin.ignore(1000, 10);
  
    if (yN == 'y' || yN == 'Y') 
	{  result = 1; 
       break;
	} // if
    else if (yN == 'n' || yN == 'N') 
	{  result = 0; 
       break;
	} // else if
    else cout << "Invalid input. Try again." << endl; continue;
  } // while
  
  return result;
  
} // yesOrNo
  
/*
cd C:\Users\Cherry\Desktop\programming\Comsc165
c++ -o Guess Guess.cpp
Guess 
*/
	
