#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

int main() {
	srand(time(0));
	int number;
	number = rand() % 100 + 1;
	int guess;
	do {
		cout << "Guess the number! Enter your number: ";
		cin >> guess;
		if (guess < number)
			cout << "Your guess is too low!" << endl;
		else if (guess > number)
			cout << "Your guess is too high!" << endl;
		else
			cout << "YOU GUESSED IT!! HAHA!!!!!" << endl;
	} while (guess != number);
	system("PAUSE");
	return 0;
}
