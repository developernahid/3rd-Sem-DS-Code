#include <bits/stdc++.h>
using namespace std;

int countCafes(int cafes[], int n, int money) {
    int count = 0;
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (cafes[mid] <= money) {
            count = mid + 1;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return count;
}

int main() {
    int n;
    cout << "Size: ";
    cin >> n;

    int cafes[n];
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> cafes[i];
    }

    int money;
    cout << "Enter the amount: ";
    cin >> money;

    int cafeCount = countCafes(cafes, n, money);
    cout<<cafeCount<<endl;

    return 0;
}