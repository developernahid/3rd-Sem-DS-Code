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
    int ar[n];
    cout<<"Enter Elements: ";
    for (int i = 0; i <n; i++)
    {
        cin>>ar[i];
    }
    cout<<"Before Sorting: ";
    PrintArray(ar,n);
    
    //Implementation Bubble sort
    for (int i = 0; i < n-1; i++)
    {
        int flag=0;
        for (int j = 0; j < n-i-1; j++)
        {
            if (ar[j]>ar[j+1])
            {
                swap(ar[j],ar[j+1]);
                flag=1;
            }
            //PrintArray(ar,n);
        }
        if (flag==0) break;
    }
    cout<<"After sorting: ";
    PrintArray(ar,n);
    
    
    return 0;
}