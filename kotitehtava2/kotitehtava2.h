#include <iostream>
#include <ctime>

class Game {
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResult();

public:
    // Parametrillinen konstruktori
    Game(int max);

    // Oletuskonstruktori
    Game();

    // Pelin looppi
    void play();

    // Destruktori
    ~Game();
};

// Parametrillisen konstruktorin toteutus
Game::Game(int max) : maxNumber(max), numOfGuesses(0) {
    // Asetetaan satunnaislukugeneraattori
    std::srand(std::time(0));

    // Arvotaan satunnainen luku välillä 1-maxNumber
    randomNumber = std::rand() % maxNumber + 1;

    // Tulostetaan aloitusviesti konstruktorissa
    std::cout << "Give your guess between 1-" << maxNumber << "." << std::endl;
}

// Oletuskonstruktorin toteutus
Game::Game() : numOfGuesses(0) {
    // Pyydetään käyttäjältä arvottavien lukujen maksimiarvo
    std::cout << "Enter the maximum value for the guessing game: ";
    std::cin >> maxNumber;

    // Asetetaan satunnaislukugeneraattori
    std::srand(std::time(0));

    // Arvotaan satunnainen luku välillä 1-maxNumber
    randomNumber = std::rand() % maxNumber + 1;

    // Tulostetaan aloitusviesti konstruktorissa
    std::cout << "Give your guess between 1-" << maxNumber << "." << std::endl;
}

// Yksityisen jäsenfunktion toteutus
void Game::printGameResult() {
    std::cout << "Your guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses." << std::endl;
}

// Pelin loopin toteutus
void Game::play() {
    // Pelaajan arvaus
    do {
        std::cout << "give your guess: ";
        std::cin >> playerGuess;

        // Tarkistetaan arvaus
        if (playerGuess < randomNumber) {
            std::cout << "Your guess is too small." << std::endl;
        } else if (playerGuess > randomNumber) {
            std::cout << "Your guess is too big." << std::endl;
        } else {
            std::cout << "Your guess is right = " << randomNumber << std::endl;
        }

        // Kasvatetaan arvauskertojen lukumäärää
        numOfGuesses++;

    } while (playerGuess != randomNumber);

    // Tulostetaan pelin lopputulos
    printGameResult();
}

// Destruktorin toteutus
Game::~Game() {
    std::cout << "Game destructor: object cleared from stack memory." << std::endl;
}
