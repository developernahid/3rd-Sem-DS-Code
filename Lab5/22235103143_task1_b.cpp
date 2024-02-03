
#include<bits/stdc++.h>
using namespace std;
void selectionSort(string ar[],int n){
    int min_index;
    for(int i = 0; i < n - 1; i++) {
        min_index = i;
        for(int j = i + 1; j < n; j++) {
            if(ar[min_index] > ar[j]) {
                min_index = j;
            }
        }
        if(min_index != i)
        {
            string temp = ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=temp;
        }
    }
}

int main() {
    int n;
    cout << "Enter Size: ";
    cin >> n;

    string names[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter "<<i+1<<" name: ";
        cin >> names[i];
    }

    selectionSort(names, n);  //function call

    cout << "After Sorted: \n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
