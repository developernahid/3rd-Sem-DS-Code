#include <bits/stdc++.h>
using namespace std;
void PrintArray(int ar[], int n){
    //For print array
    for (int i = 0; i <n; i++)
    {
      cout<<ar[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
       cin>>ar[i];
    }
    //Implement insertion sort

    for (int i = 0; i < n; i++)
    {   int key=ar[i];
        int j = i-1;
        while (j >= 0 && ar[j] < key) {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j+1]=key;
    }
    cout<<"After sort: ";
    PrintArray(ar,n);

}