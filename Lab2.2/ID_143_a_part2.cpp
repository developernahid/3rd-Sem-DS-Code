#include <bits/stdc++.h>
using namespace std;
//Implement selection Sort:
void SelectionSort(int ar[], int n){
    int count=0;
     for (int i = 0; i < n-1; i++)
    {
        int max=i;
        for (int j = i+1; j<n; j++)
        {
            if (ar[max]<ar[j])
            {
                max=j;
            }
            
        }
        swap(ar[i],ar[max]);
        count++;
        
    }
    cout<<"No. Of swap: "<<count<<endl;
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
    cout<<"Applying Selection Sort: \n";
    SelectionSort(ar,n);
    cout<<"\n";
    

}