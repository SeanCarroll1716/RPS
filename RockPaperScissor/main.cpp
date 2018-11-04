#include "inc.h"

/*
   forgot the rules of the game so here they are:
   scissors beats paper
   paper beat rock
   rock beat scissors
*/

int main(){
	int rock = 1,
	scissors = 2,
	paper = 3;

	displayMenu();
	int userChoice = getUserChoice();
	int compChoice = getComputerChoice();
	winner(userChoice, compChoice);

	std::cout << userChoice << ' ' << compChoice << std::endl;

	return 0;
}
