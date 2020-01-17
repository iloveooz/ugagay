#include <iostream>
#include <ctime>
#include <memory>

class Number {
public:
	Number() {
		_number = rand() % 100;
	}

	int getNumber() {
		return _number;
	}

private:
	int _number;
};

class Game {
public:
	Game() {
		srand(time(nullptr));
		_number = std::make_unique<Number>();
	}

	void startGame() {
		int count = 0;
		std::cout << "Find my Number!" << std::endl;

		for (int i = 0; i < 10; i++) {
			std::cout << "Input your number: ";
			std::cin >> _myNumber;
			if (_number->getNumber() == _myNumber) {
				std::cout << "equals!" << std::endl;
				break;
			}
			else
				std::cout << "not equals..." << std::endl;

			if (_number->getNumber() > _myNumber)
				std::cout << "My UPPER." << std::endl;
			else
				std::cout << "My lower." << std::endl;
		}
	}
private:
	std::unique_ptr<Number> _number;
	int _myNumber;
};

int main() {
	Game game;

	game.startGame();

	std::cout << std::endl;
	system("pause");
	return 0;
}
