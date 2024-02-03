
#include<bits/stdc++.h>
using namespace std;


//Bubble sort
void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j],arr[j+1]);
                string temp = arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    string names[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter "<<i+1<<" name: ";
        cin >> names[i];
    }

    bubbleSort(names, n);  //function call

    cout << "After Sorted names: \n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
