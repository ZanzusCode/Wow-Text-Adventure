// Wow-Text-Adventure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
	int playerHealth = 3;
	std::string heroName;
	char questProgression;
	int phaseOneChoice = 0;
	
		//Story into:
		std::cout << "Welcome to the World of Warcraft!!!! \n\n";
		std::cout << "Dear Hero, what is your name? \n";

		//Get player name:
		std::cin >> heroName;
		std::cout << "\n";
		std::cout << "Welcome " << heroName << " we thank you for responding to our request. \n\n";

		//Explain quest:
		std::cout << heroName << ".... What we ask, we do not ask lightly.\n" << "It appears Illidian has taken the Black Keep and is searching for strong allies. \n\n";
		std::cout << "We want you to infiltrate their keep as an undercover agent..... Will you accept? \n\n";

		//Accept quest:

		do {
			std::cout << "Click 'y' to accept or 'n' to decline. \n\n";
			std::cin >> questProgression;
			std::cout << "\n";
		} while (questProgression != 'y' && questProgression != 'n'); {
			if (questProgression == 'y') {
				std::cout << "Excellent " << heroName << " we knew we could rely on you \n\n";
			}
			else if (questProgression == 'n') {
				std::cout << "That's a shame, we expected great things from you. \n\n";
				return 0;
			}
		}

		std::cout << "Let us depart immediately " << heroName << "\n\n";

		//Phase one approach the black keep:
		std::cout << "You reach the black keep, as you do. You realise it is heavily guarded.\n";
		std::cout << " Your options are: \n\n" << "1.) Storm the front gate. \n" << "2.) Sneak around the back. \n" << "3.) Scale the walls... careful it's high \n";



		//Calculate choice
		do {
			//Check user choice:
			std::cout << "Please choose from the numbered options above (1,2 or 3)\n\n";
			std::cin >> phaseOneChoice;

			if (phaseOneChoice == 1) {
				std::cout << "A melee brawl brakes out.... It does not end well for you.\n";
				playerHealth--;
				std::cout << "You loose a life.... Ouch only :" << playerHealth << " reamining \n\n.";
			}
			else if (phaseOneChoice == 2) {
				std::cout << "You succesfully sneak around the back. \n\n";
			}
			else if (phaseOneChoice == 3) {
				std::cout << "You attempt to scale the wall.......\n" << "You fall..... Ouch";
				playerHealth--;
				std::cout << "You loose a life.... only :" << playerHealth << " remaining.\n\n";
			}
		}
		while (phaseOneChoice == 1 || phaseOneChoice == 3 && playerHealth > 0);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
