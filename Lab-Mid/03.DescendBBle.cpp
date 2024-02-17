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
    cout<<"Enter size: ";
    cin>>n;
    int ar[n];
    for (int i = 0; i <n; i++)
    {
        cin>>ar[i];
    }
    cout<<"Before Sort: ";
    PrintArray(ar,n);

    //Implement Bubble sort descending order
    for (int i = 0; i < n-1; i++)
    {
        for (int j= 0; j <n-i-1; j++)
        {
            if (ar[j+1]>ar[j])
            {
                swap(ar[j+1],ar[j]);
                count++;
            }
            
        }
    }
    cout<<"Swap= "<<count<<endl;
    cout<<"After Sort(Descending): ";
    PrintArray(ar,n);

}