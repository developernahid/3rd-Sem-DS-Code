#include <iostream>
using namespace std;

string deleteText(string text, int position, int length) {
      if (position >= text.length()) {
        cout<<"Invalid position!"<<endl;
        return text;
      }
    string newText = text.substr(0, position) + text.substr(position + length);
    return newText;
}

int main() {
    string text;
    int position, length;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the position: ";
    cin >> position;
    cout << "Enter the length: ";
    cin >> length;
    string newText = deleteText(text, position, length);
    cout << "Text after deletion: " << newText << endl;
    return 0;
}