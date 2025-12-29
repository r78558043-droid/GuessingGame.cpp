#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));                 // Seed random number generator
    int number = rand() % 100 + 1;  // Random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Guess a number between 1 and 100: ";

    do {
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high! Try again: ";
        } else if (guess < number) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Correct! You guessed it in " << attempts << " attempts.\n";
        }
    } while (guess != number);

    return 0;
}
