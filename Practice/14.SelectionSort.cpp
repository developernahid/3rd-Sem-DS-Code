#include <bits/stdc++.h>
using namespace std;
void PrintArray(int ar[], int n){
    for (int i = 0; i < n; i++)
    {
       cout<<ar[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements: ";
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    cout<<"Before Sorting: ";
    PrintArray(a,n);
    
    //Selection Sort Implementation
     int min_index;
    for(int i = 0; i < n - 1; i++) {
        min_index = i;
        for(int j = i + 1; j < n; j++) {
            if(a[min_index] > a[j]) {
                min_index = j;
            }
        }
        if(min_index != i)
        {
            swap(a[min_index],a[i]);
        }
        PrintArray(a,n);
    }
    cout<<"After sorting: ";
    PrintArray(a,n);
    
    
    return 0;
}