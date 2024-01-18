#include <iostream>
#include <cstring>

using namespace std;

bool isPangram(const string& str) {
    // Array to keep track of the occurrence of each alphabet
    bool alphabets[26] = {false};

    // Traverse the input string
    for (char ch : str) {
        if (isalpha(ch)) {
            // Convert the character to lowercase and mark its occurrence
            alphabets[tolower(ch) - 'a'] = true;
        }
    }

    // Check if all alphabets have occurred at least once
    for (bool isPresent : alphabets) {
        if (!isPresent) {
            return false;
        }
    }

    return true;
}

int main() {
    string input;

    // Get input from the user
    cout << "Enter a string: ";
    getline(cin, input);

    // Check if the input is a Pangram
    if (isPangram(input)) {
        cout << "The given string is a Pangram." << endl;
    } else {
        cout << "The given string is not a Pangram." << endl;
    }

    return 0;
}
