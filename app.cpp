#include "game.h"
 
 
int main() {
	string again;

	do {
    //User's choice
    char uChoice; 
    //Compter's choice
    char cChoice;
	//Chick if uesr want to play agin
    
    uChoice = getUserOption();
    cout << "Your choice is: "<< endl;
    showSelectedOption(uChoice);
    
    cout << "Computer's choice is: "<< endl;
    cChoice = getComputerOption();
    showSelectedOption(cChoice);
    
    chooseWinner(uChoice, cChoice);
 
	cout << "Do you want to paly agin? (yes or no): ";
	cin >> again;

	} while (again == "yes");

	cout << "Good bye\n";
	
    return 0;
}


char getComputerOption() {
    srand(time(0));
    // Random number
    int num = rand() % 3 + 1;
 
    if(num==1) return 'r';
    else if(num==2) return 'p';
    else if(num==3) return 's';
	else return 'f';
}
 
char getUserOption() {
    char c;
    cout << "Rock, Paper and Scissors Game!" << endl;
    cout << "Choose one of the following options"  << endl;
    cout << "-----------------------------------"  << endl;
    cout << "(r) rock " << endl << "(p) paper" << endl << "(s) scissors " << endl;
    cin >> c;
    
    while (c!='r' && c!='p' && c!='s' )
    {
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
        cin >> c;
    }
 
    return c;
}
 
void showSelectedOption(char option) {
    if (option == 'r') cout << "Rock" << endl;
    if (option == 'p') cout << "Paper" << endl;
    if (option == 's') cout << "Scissors" << endl;
}
 
void chooseWinner(char uChoice, char cChoice) {
    if (uChoice == ROCK && cChoice == PAPER) {
        cout << "Computer Wins! Paper wraps Rock."<< endl;
    }
    else if (uChoice == PAPER && cChoice == SCISSORS) {
        cout << "Computer Wins! Scissors cut Paper."<< endl;
        
    }
    else if (uChoice == SCISSORS && cChoice == ROCK) {
        cout << "Computer Wins! Rock smashes Scissors."<< endl;
        
    }
    else if (uChoice == ROCK && cChoice == SCISSORS) {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (uChoice == PAPER && cChoice == ROCK) {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (uChoice == SCISSORS && cChoice == PAPER) {
        cout << "You Win! Scissors cut Paper."<< endl;
    }
    else{
        cout << "Tie. Play again win the Game." << endl;
    }
}
 