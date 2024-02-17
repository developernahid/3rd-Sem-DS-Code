//Bubble sort using j<n-i-1//
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
    int n,pass=0;
    cout<<"Enter size: ";
    cin>>n;
    int ar[n];
    for (int i = 0; i <n; i++)
    {
        cin>>ar[i];
    }
    
    //Implementation Bubble sort
    for (int i = 0; i < n-1; i++)
    {

        pass++;
        for (int j = 0; j < n-i-1; j++)
        {
            if (ar[j]>ar[j+1])
            {
                swap(ar[j],ar[j+1]);
               
            }
        }
        
    }
    cout<<"No. of pass: "<<pass<<endl;
    cout<<"After sorting: ";
    PrintArray(ar,n);
    
    
    return 0;
}