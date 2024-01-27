#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int ar[], int x, int lb, int hb) {
    int mid;
    while (lb <= hb) {
        mid = lb + (hb - lb) / 2;

        if (ar[mid] == x)
            return mid;

        if (ar[mid] < x)
            lb = mid + 1;
        else
            hb = mid - 1;
    }
    if (lb >= 0 && lb < hb)
        return lb;
    else if (hb >= 0 && hb < lb)
        return hb;
    else
        return -1;
}
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int ar[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    sort(ar, ar + n);

    int x;
    cout << "Enter value for search: ";
    cin >> x;

    int index = BinarySearch(ar, x, 0, n - 1);

    if (index != -1)
        cout << "Closest index: " << index << endl;
    else
        cout << "Value not found" << endl;

    return 0;
}
