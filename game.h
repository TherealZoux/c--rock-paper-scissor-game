/** Game vars and functions
 * */ 
#include <iostream>

using namespace std;

// Constant variables
const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

char getComputerOption();
char getUserOption();
void showSelectedOption(char option);
void chooseWinner(char uChoice, char cChoice);

 