#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

void numberGuessingGame() {
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int playerGuess;
    int guessCount = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> playerGuess;
        guessCount++;

        if (playerGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (playerGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number in " << guessCount << " attempts." << endl;
        }
    } while (playerGuess != randomNumber);
}

int main() {
    numberGuessingGame();
    return 0;
}
