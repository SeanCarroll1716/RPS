#include "macros.h"

void displayMenu(){
	std::cout << "-----------------------------------------------------\n" << std::endl;
	std::cout << "Author: " << AUTHOR_OF_GAME << "\n" <<
			  "Version: " << VERSION << "\n\n" << std::endl;

	std::cout << "Welcome to Rock Paper Scissors Choose a number from the menu below \n" <<
			  "to Choose which object you would like to be.\n" << std::endl;

	std::cout << "1. Rock \n"
				<< "2. Scissors \n"
				<< "3. Paper" << std::endl;
}

int getUserChoice(){
	int userChoice;
	std::cout << "enter in your choice: ";
	std::cin >> userChoice;
	if(userChoice > 3){
		std::cout << "please enter in a number in the range of 1-3: ";
		std::cin >> userChoice;
	}

	return userChoice;

}

int getComputerChoice(){
	srand(time(NULL));
	int CompChoice = (rand() % 3) + 1;
	return CompChoice;
}

void winner(int user, int computer){
	if(user == 2 && computer == 3){
		std::cout << "user wins" << std::endl;
	}else if(computer == 2 && user == 3){
		std::cout << " computer wins" << std::endl;
	}

	if(user == 3 && computer == 1){
		std::cout << "user wins" << std::endl;
	}else if(user == 1 && computer == 3){
		std::cout << "computer wins" << std::endl;
	}

	if(user == 1 && computer == 2){
		std::cout << "user wins " << std::endl;
	}else if(computer == 1 && user == 2){
		std::cout << "computer wins" << std::endl;
	}

	if(user == computer)
		std::cout << "DRAW" << std::endl;
}