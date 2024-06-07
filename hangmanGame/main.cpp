#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayCurrentState(const string& word, const vector<bool>& guessed) {
	for (size_t i = 0; i < word.length(); i++) {
		if (guessed[i]) {
			cout << word[i] << " ";
		}
		else {
			cout << "_ ";
		}
	}
}

bool isWordGuessed(const vector<bool>& guessed) {
	for (bool latterGuessed : guessed) { 
		if (!latterGuessed) {
			return false;

		} 
	}
	return true;
}

int main() {
	vector<string> words = { "samsun","antalya","tablet","bilgisayar" }; 
	srand(static_cast<unsigned int>(time(0))); 
	string selectedWord = words[rand() % words.size()];

	vector<bool> guessed(selectedWord.length(), false);  
	int wrongGuesses = 0;
	const int maxWrongGuesses = 6;
	char guess;

	cout << "----Adam Asmaca Oyununa Hos Geldiniz!----" << endl;

	while (wrongGuesses < maxWrongGuesses && !isWordGuessed(guessed)) {  
		cout << "Tahmin Ettiginiz Kelime: " ;
		displayCurrentState(selectedWord, guessed); 
		cout << "\nBir Harf Giriniz: ";
		cin >> guess;

		bool correctGuess = false;
		for (size_t i = 0; i < selectedWord.length(); i++) { 
			if (selectedWord[i] == guess) {
				guessed[i] = true;  
				correctGuess = true;
			}
		}

		if (!correctGuess) {
			wrongGuesses++;
			cout << "Yanlis Tahmin, Kalan Hakkiniz: " << maxWrongGuesses - wrongGuesses << endl;
		}
	}

	if (isWordGuessed(guessed)) {
		cout << "Tebrikler! Kelimeyi Dogru Tahmin Ettiniz: " << selectedWord << endl;
	}
	else {
		cout << "Uzgunum, Kaybettiniz. Dogru Kelime: " << selectedWord << endl;
	}
	return 0;
}