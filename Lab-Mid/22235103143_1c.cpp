#include <bits/stdc++.h>
using namespace std;
vo(int ar[], int n){
    


    
    cout<<"Sorted Array: ";
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
    for (int i = 0; i <n; i++)
    {
        cin>>ar[i];
    }
    cout<<"Applying Bubble Sort: \n";
    BubbleSort(ar,n);

    
    

}