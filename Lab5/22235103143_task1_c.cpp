
#include<bits/stdc++.h>
using namespace std;
void insertionSort(string ar[],int n){
      for (int i =1; i<n; i++)
    {
        string key= ar[i];
        int j= i-1;
        while(ar[j]>key && j>=0)
        {
            ar[j+1]= ar[j];
            j--;
        }
        ar[j+1]=key;
    
    }
}

int main() {
    int n;
    cout<<"Enter size:";
    cin>>n;

    string names[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter "<<i+1<<" name: ";
        cin >> names[i];
    }

   insertionSort(names, n);  //function call

    cout << "After Sorted: \n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
