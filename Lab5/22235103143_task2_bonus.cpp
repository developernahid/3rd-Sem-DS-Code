#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Number of coin: ";
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }
    sort(coins.rbegin(), coins.rend());

    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += coins[i];
    }
    int left = total;
    int taken = 0;
    for (int i = 0; i < n; ++i) {
        left -= coins[i];
        taken++;

        if (total - left > left) {
            break;
        }
    }
    cout << taken << endl;

    return 0;
}
