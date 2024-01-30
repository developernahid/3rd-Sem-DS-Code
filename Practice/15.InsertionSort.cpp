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
    //Insertion sort implementation
    for (int i =1; i<n; i++)
    {
        int key= a[i];
        int j= i-1;
        while(a[j]>key && j>=0)
        {
            a[j+1]= a[j];
            PrintArray(a,n);
            j--;
        }
        a[j+1]=key;
        PrintArray(a,n);
    
    }
    cout<<"After sorting: ";
    PrintArray(a,n);
    

}