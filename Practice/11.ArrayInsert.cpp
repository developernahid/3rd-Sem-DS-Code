#include <bits/stdc++.h>
using namespace std;
void PrintArray(int ar[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int n;
    cin>>n;
    int ar[10];
    for (int i = 0; i <n; i++)
    {
        cin>>ar[i];
    }
    cout<<"Your array:";
    PrintArray(ar,n);
    int pos,value;
    cout<<"Enter index:";
    cin>>pos;
    cout<<"Enter Value:";
    cin>>value;
    // for (int i = n-1; i>=pos; i--){
    // ar[i+1]=ar[i];
    // }
    ar[n]=ar[pos];
    ar[pos]=value;
    
    n++;
    cout<<"After insert value:";
    PrintArray(ar,n);
    


}