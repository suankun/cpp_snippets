#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // For rand()
#include <ctime>   // For time()

using namespace std;

// Flashcard class to store question and answer
class Flashcard {
public:
    string question;
    string answer;

    Flashcard(string q, string a) {
        question = q;
        answer = a;
    }
};

// FlashcardApp class to manage flashcards and interact with the user
class FlashcardApp {
private:
    vector<vector<Flashcard>> decks;   // Three decks of flashcards
    vector<int> correctAnswersCount;   // Track correct answers for the active flashcards
    vector<Flashcard> activeFlashcards;// Active flashcards in the chosen deck
    vector<Flashcard> masteredFlashcards; // Mastered flashcards (temporarily removed)
    const int totalFlashcards = 10;

    // Initialize three decks of predefined flashcards
    void initializePredefinedFlashcards() {
        // Deck 1
        vector<Flashcard> deck1 = {
            Flashcard("屋顶, wūdǐng", "roof"),
            Flashcard("烟囱, yāncōng", "chimney"),
            Flashcard("阁楼, gélóu", "attic"),
            Flashcard("阳台, yángtái", "balcony"),
            Flashcard("墙, qiáng", "wall"),
            Flashcard("窗戶, chuānghu", "window"),
            Flashcard("一楼, yī lóu", "first floor"),
            Flashcard("二楼, èr lóu", "second floor"),
            Flashcard("三楼, sān lóu", "third floor"),
            Flashcard("门, mén", "door")
        };

        // Deck 2
        vector<Flashcard> deck2 = {
            Flashcard("房间, fángjiān", "room"),
            Flashcard("楼房, lóufáng", "building"),
            Flashcard("买房(子), mǎi fáng(zi)", "buy a house"),
            Flashcard("卖房(子), mài fáng(zi)", "sell a house"),
            Flashcard("房价, fáng jià", "house price"),
            Flashcard("租房(子), zū fáng(zi)", "rent a house"),
            Flashcard("房租, fáng zū", "house rent"),
            Flashcard("房东, fángdōng", "landlord"),
            Flashcard("房客, fángkè", "tenant"),
            Flashcard("房车, fáng chē", "camper van")
        };

        // Deck 3
        vector<Flashcard> deck3 = {
            Flashcard("行李舱, xínglǐ cāng", "trunk"),
            Flashcard("风挡, fēngdǎng", "windshield"),
            Flashcard("引擎盖, yǐnqíng gài", "hood"),
            Flashcard("外后视镜, wài hòu shì jìng", "mirror"),
            Flashcard("前灯, qián dēng", "headlight"),
            Flashcard("车牌, chēpái", "license plate"),
            Flashcard("转向灯, zhuǎnxiàng dēng", "turn signal"),
            Flashcard("轮胎, lúntāi", "tire"),
            Flashcard("车轮, chēlún", "wheel"),
            Flashcard("车门, chēmén", "door")
        };

        // Adding decks to the deck list
        decks.push_back(deck1);
        decks.push_back(deck2);
        decks.push_back(deck3);
    }

    // Select a deck and initialize the activeFlashcards and correctAnswersCount vectors
    void selectDeck(int deckNumber, int& currentDeckIndex) {
        activeFlashcards.clear();
        correctAnswersCount.clear();
        masteredFlashcards.clear();

        vector<Flashcard>& selectedDeck = decks[deckNumber - 1];

        // Start with 3 flashcards
        for (int i = 0; i < 3; i++) {
            activeFlashcards.push_back(selectedDeck[i]);
            correctAnswersCount.push_back(0);
        }

        // Set the current index to start adding new flashcards from the 4th one
        currentDeckIndex = 3;  // Start adding new flashcards from the 4th flashcard
    }

    // Check if all active flashcards have been mastered (5 consecutive correct answers)
    bool allFlashcardsAnsweredCorrectly() {
        for (int count : correctAnswersCount) {
            if (count < 5) {
                return false;
            }
        }
        return true;
    }

    // Remove flashcards that have 5 consecutive correct answers
    void removeMasteredFlashcards() {
        for (size_t i = 0; i < activeFlashcards.size(); ++i) {
            if (correctAnswersCount[i] >= 5) {
                masteredFlashcards.push_back(activeFlashcards[i]);
                activeFlashcards.erase(activeFlashcards.begin() + i);
                correctAnswersCount.erase(correctAnswersCount.begin() + i);
                --i;  // Adjust the index after removal
            }
        }
    }

    // Add a new flashcard to the active set, and bring back mastered flashcards
    void addNewFlashcard(int& currentDeckIndex, vector<Flashcard>& selectedDeck) {
        if (currentDeckIndex < totalFlashcards) {
            // Add next flashcard from the selected deck
            activeFlashcards.push_back(selectedDeck[currentDeckIndex]);
            correctAnswersCount.push_back(0);
            currentDeckIndex++;
        }

        // Reintroduce mastered flashcards
        for (Flashcard& card : masteredFlashcards) {
            activeFlashcards.push_back(card);
            correctAnswersCount.push_back(0);
        }
        masteredFlashcards.clear();
    }

    // Reset the correct answer count for all active flashcards
    void resetCorrectAnswers() {
        for (size_t i = 0; i < correctAnswersCount.size(); ++i) {
            correctAnswersCount[i] = 0;
        }
    }

public:
    // Constructor
    FlashcardApp() {
        srand(static_cast<unsigned int>(time(0)));
        initializePredefinedFlashcards();
    }

    // Quiz the user with the active flashcards
    void quiz(int& currentDeckIndex, vector<Flashcard>& selectedDeck) {
        if (activeFlashcards.empty()) {
            cout << "No flashcards available to quiz.\n" << endl;
            return;
        }

        // Select a random flashcard from the active ones
        int index = rand() % activeFlashcards.size();
        Flashcard& flashcard = activeFlashcards[index];

        cout << "Question: " << flashcard.question << endl;
        cout << "Your answer: ";
        string userAnswer;
        getline(cin, userAnswer);

        // Check if the answer is correct
        if (userAnswer == flashcard.answer) {
            cout << "Correct!\n" << endl;
            correctAnswersCount[index]++;

            // Check if the current flashcard can be removed after 5 consecutive correct answers
            removeMasteredFlashcards();

            // Check if all flashcards are mastered
            if (activeFlashcards.empty() && currentDeckIndex < totalFlashcards) {
                addNewFlashcard(currentDeckIndex, selectedDeck);
                resetCorrectAnswers();  // Reset for the next round
            }

            // If all 10 flashcards have been mastered, finish the game
            if (currentDeckIndex == totalFlashcards && masteredFlashcards.empty()) {
                cout << "Congratulations! You've mastered all flashcards. Game over!\n";
                exit(0);
            }
        } else {
            cout << "Incorrect. The correct answer is: " << flashcard.answer << "\n" << endl;
            correctAnswersCount[index] = 0;  // Reset the correct answer count for this flashcard
        }
    }

    // Start the app and prompt the user to choose a deck
    void start() {
        cout << "Welcome to the Flashcard App!\n";
        cout << "Please select a deck to learn from:\n";
        cout << "1. Deck 1\n";
        cout << "2. Deck 2\n";
        cout << "3. Deck 3\n";
        cout << "Choose a deck (1-3): ";
        
        int deckChoice;
        cin >> deckChoice;
        cin.ignore();  // To ignore the newline character after entering the number

        if (deckChoice < 1 || deckChoice > 3) {
            cout << "Invalid deck choice. Exiting the app.\n";
            return;
        }

        int currentDeckIndex;
        selectDeck(deckChoice, currentDeckIndex); // Set up the selected deck for learning
        vector<Flashcard>& selectedDeck = decks[deckChoice - 1]; // Get the selected deck reference

        while (true) {
            cout << "Flashcard App Menu:\n";
            cout << "1. Quiz Yourself\n";
            cout << "2. Exit\n";
            cout << "Choose an option (1-2): ";
            string choice;
            getline(cin, choice);

            if (choice == "1") {
                quiz(currentDeckIndex, selectedDeck);
            } else if (choice == "2") {
                cout << "Exiting the app. Goodbye!\n";
                break;
            } else {
                cout << "Invalid choice. Please choose again.\n" << endl;
            }
        }
    }
};

int main() {
    FlashcardApp app;
    app.start();
    return 0;
}
