#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    string player_guess;

    string my_life_words[17] = {
        "computer", "television", "keyboard", "laptop", "mouse",
        "science", "data", "university", "campus", "library",
        "TOS", "servery", "room", "lecture", "professor", "conrad", "C3"
    };

    while (true) {

        srand(static_cast<unsigned int>(time(0)));
        int randi = rand() % 17;
        string word = my_life_words[randi];

        string w_rd = word;
        for (int i = 0; w_rd[i] != '\0'; i++) {
            if (w_rd[i] == 'a' || w_rd[i] == 'e' || w_rd[i] == 'i' ||
                w_rd[i] == 'o' || w_rd[i] == 'u') {
                w_rd = '_';
            }
        }

        cout << "Guess the word: " << w_rd << endl;

        int count = 0;
        while (true) {
            cin >> player_guess;
            count++;

            if (player_guess == word) {
                cout << "Congratulations! You've guessed the word '" << word << "' in " << count << " tries." << endl;
                break;
            }

            cout << "Incorrect guess. Try again." << endl;

            if ((player_guess) == "quit") {
                cout << "You quit the game." << endl;
                return 0;
            }
        }

        string play_again;
        cout << "Do you want to play again? (yes/no): ";
        cin >> play_again;


        if (play_again != "yes") {
            break;
        }
    }

    return 0;
}





/*#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	string player_guess;

	int count = 0;

	string my_life_fr[17] = { "computer", "television", "keyboard", "laptop",
		   "mouse", "science", "data", "university", "campus", "library", "TOS",
		   "servery", "room", "lecture", "proffesor", "conrad", "C3"};

	string word;
	
	while (1) {
		srand(static_cast <unsigned int>(time(0)));
		int randi = rand() % 17;
		word = my_life_fr[randi];

		string w_rd = word;
		for (int i = 0; w_rd[i] != '\0'; i++) {
			if (w_rd[i] == 'a' || w_rd[i] == 'e' || w_rd[i] == 'i' ||
				w_rd[i] == 'o' || w_rd[i] == 'u')

				w_rd[i] = '_';

		}


		cout << w_rd << endl;


		while (1) {
			cin >> player_guess;
			if (player_guess != word) {

				count++;

				cout << "try it again";
			}
			else {

				cout << "congratulations you've guessed THE word!\n" << "Rematch?" << endl;
				cin >> player_guess;
			}
		}
		

		if (player_guess == "quit") {
			break;
		}
	}

	return 0;

}*/