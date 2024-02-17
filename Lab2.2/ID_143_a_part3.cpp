#include <bits/stdc++.h>
using namespace std;
//Implement insertion sort
void InsertionSort(int ar[], int n){
    int count=0;
    for (int i = 1; i < n; i++)
    {   int key=ar[i];
        int j = i-1;
        while (j >= 0 && ar[j] < key) {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j+1]=key;
        count++;
        
    }
    cout<<"No. Of swap: "<<count<<endl;
    cout<<"Array (Descending Order): ";
    for (int i = 0; i <n; i++)
    {
      cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,count=0;
    cout<<"Enter size: ";
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
       cin>>ar[i];
    }
    cout<<"Applying Insertion Sort:\n";
    InsertionSort(ar,n);
    

}