#include <iostream>
using namespace std;
int INDEX(string text, string pattern) {
    int lengthText = text.length();
    int lengthPattern = pattern.length();

    for (int i = 0; i <= lengthText - lengthPattern; ++i) {
        bool flag = true;

        for (int j = 0; j < lengthPattern; ++j) {
            if (text[i + j] == pattern[j]) {
                continue;
            } else {
                flag = false;
                break;
            }
        }

        if (flag) {
            return i; 
        }
    }
    return -1;
}
int main() {
    string t, p;

    cout << "Enter the text: ";
    getline(cin, t);

    cout << "Enter the pattern: ";
    getline(cin, p);

    int result = INDEX(t, p);

    if (result != -1) {
        cout << "Pattern found at index: " << result << endl;
    } else {
        cout << "Pattern not found in the text." << endl;
    }

    return 0;
}