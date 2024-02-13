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
    int n,count=0;
    cout<<"Enter Size: ";
    cin>>n;
    int ar[n];
    for (int i = 0; i <n; i++)
    {
        cin>>ar[i];
    }
    //PrintArray(ar,n);

    //Implement Bubble sort
    for (int i = 0; i <n-1; i++)
    {
        //
        cout<<"Iteration: "<<i<<endl;
        for (int j= 0; j <n-i-1; j++)
        {
            if(ar[j]>ar[j+1]){
                swap(ar[j],ar[j+1]);
                count++;
                PrintArray(ar,n);
            }
            
        }
        PrintArray(ar,n);
        
    }
    //Print array
    cout<<"Count="<<count<<endl;
    cout<<"Final: ";
    PrintArray(ar,n);
    

    
}