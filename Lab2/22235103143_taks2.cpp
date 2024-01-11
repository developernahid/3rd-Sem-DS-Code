#include <bits/stdc++.h>
using namespace std;
int main() {
    
    string str1, str2;
    cout << "Enter string 1: ";
    cin >> str1;
    cout << "Enter string 2: ";
    cin >> str2;

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if (str1 < str2) {
        cout << "-1\n";
    } else if (str1 > str2) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }

    return 0;
}
