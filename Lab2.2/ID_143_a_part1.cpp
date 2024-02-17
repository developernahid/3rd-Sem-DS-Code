#include <bits/stdc++.h>
using namespace std;
 //Implement Bubble sort descending order
void BubbleSort(int ar[], int n){
    int cnt=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j= 0; j <n-i-1; j++)
        {
            if (ar[j+1]>ar[j])
            {
                swap(ar[j+1],ar[j]);
                cnt++;
            }
            
        }
    }
    cout<<"No. Of swap: "<<cnt<<endl;
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
    for (int i = 0; i <n; i++)
    {
        cin>>ar[i];
    }
    cout<<"\n";
    cout<<"Applying Bubble Sort: \n";
    BubbleSort(ar,n);
    cout<<"\n";
    return 0;
}