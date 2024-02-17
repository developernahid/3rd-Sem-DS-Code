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

    //implement selection sort
    for (int i = 0; i < n-1; i++)
    {
        //int min= i;
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
    cout<<"Num of swap:"<<count<<endl;
    cout<<"After Sorted(Descending): ";
    PrintArray(ar,n);
    
}

