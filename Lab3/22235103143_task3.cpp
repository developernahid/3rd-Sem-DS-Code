#include <bits/stdc++.h>
using namespace std;
bool isPangram(const string& str) {
    bool alphabets[26] = {false};
    for (char ch : str) {
        if (isalpha(ch)) {
            alphabets[tolower(ch) - 'a'] = true;
        }
    }
    for (bool isPresent : alphabets) {
        if (!isPresent) {
            return false;
        }
    }

    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    if (isPangram(input)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}