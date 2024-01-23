#include <bits/stdc++.h>
using namespace std;
void PrintArray(int ar[], int n){
    for (int i = 0; i <n; i++)
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
    cout<<"Your array: ";
    PrintArray(ar,n);
    int pos;
    cout<<"Enter position to delete:";
    cin>>pos;
    if (pos<0 || pos>n-1)
    {
        cout<<"Invalid index\n";
    }
    if (pos==n-1) n--;
    else{
        for (int i =pos+1; i <n; i++)
        {
            ar[i-1]=ar[i];
        }
        n--;
    }
    cout<<"After delete: ";
    PrintArray(ar,n);


}