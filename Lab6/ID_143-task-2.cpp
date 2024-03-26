#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cout << "No of case: ";
    cin >> N;
    cin.ignore();      

    for (int i = 0; i < N; ++i) {
        string input;
        cout << "Enter string " << i+1 << ": ";
        getline(cin, input);

        stack<char> st;

        for (char c : input) {
            st.push(c);
        }

        cout << "Reverse of string " << i+1 << ": ";
        while (!st.empty()) {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }

    return 0;
}
