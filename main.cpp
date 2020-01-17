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
		number = std::make_unique<Number>();
	}

	void startGame() {
		srand(time(nullptr));
		std::cout << "Ugaday" << std::endl;
		std::cout << number->getNumber();
	}
private:
	std::unique_ptr<Number> number;
};

int main() {
	Game game;

	game.startGame();

	std::cout << std::endl;
	system("pause");
	return 0;
}
