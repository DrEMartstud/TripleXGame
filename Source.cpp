#include <iostream>
#include <ctime>

void GameIntroduction(){
	//Story initialisation
	std::cout << "You wake up in a freezing blizzard.. \n";
	std::cout << "Your head aches and you hardly remember, how you ended up in a blizzard.\n";
	std::cout << "You search your pockets and you find a cracked, but still working pocket terminal.\n";
	std::cout << "It is locked with a password.\n";
	std::cout << "In a distance you hear a sound of disturbing siren.\n";
	std::cout << "Blizzard is so thicc and cold, that you see nothing and feel your body slowly losing heat.\n";
	std::cout << "To survive you have to unlock pocket terminal and request help.\n";
	std::cout << std::endl;
	std::cout << "As soon as you tryed to unlock it your face got scanned by it and a message on a display appeared:\n";
	std::cout << std::endl;
	std::cout << "'ERR. Face not recognized. Loggin into guest accout... To proceed solve simple test:'\n";
	}

bool PlayGame(int Difficulty) {
	//Declaration of test
	const int FirstX = rand() % Difficulty + Difficulty, SecondX = rand() % Difficulty + Difficulty, ThirdX = rand() % Difficulty + Difficulty;
	const int Sum = FirstX + SecondX + ThirdX, Multiply = FirstX * SecondX * ThirdX;
	std::cout << "\n #" << Difficulty << std::endl;
	std::cout << "* there are 3 numbers\n";
	std::cout << "* numbers Multiply to give " << Multiply << std::endl;
	std::cout << "* numbers add-up to " << Sum << std::endl;
	std::cout << "'Enter the three numbers, devided with spacebar'\n";

	int FirstPlayerGuess, SecondPlayerGuess, ThirdPlayerGuess;
	std::cin >> FirstPlayerGuess >> SecondPlayerGuess >> ThirdPlayerGuess;
	const int GuessSum = FirstPlayerGuess + SecondPlayerGuess + ThirdPlayerGuess, GuessMultiply = FirstPlayerGuess * SecondPlayerGuess * ThirdPlayerGuess;
	if (GuessSum == Sum && GuessMultiply == Multiply) {
		std::cout << "'Correct! Proceeding..'\n";
		return true;
	}
	else {
		std::cout << "'Wrong!'\n";
		return false;
	}
}








int main() {
	srand(time(NULL));
	int LevelDifficulty = 1;
	const int MaxLevelDifficulty = 5;
	GameIntroduction();
	while (LevelDifficulty <= MaxLevelDifficulty) {
		bool LevelCompleted = PlayGame(LevelDifficulty);
		std::cin.clear();
		std::cin.ignore();
		if (LevelCompleted) {
			++LevelDifficulty;
		}
	}
	std::cout << "\n'Test solved. Welcome to the system!'\n";
	std::cout << "As you logged in, you searched for useful apps.\n";
	std::cout << "You found app named 'SOS' and immediately launched it.\n";
	std::cout << "Now your cracked screen displays a message:\n";
	std::cout << "'Resque drones have been sent. Wait.'\n";
	std::cout << "You have bested your chances of survival, but there is more to come...\n";
	std::cout << "To be continued...\n";

	return 0;
}