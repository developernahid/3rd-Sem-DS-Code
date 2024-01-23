#include <bits/stdc++.h>
using namespace std;
int BinarySrc(int ar[],int x, int lower, int higher){
    int mid= (lower+higher)/2;
    if (lower<=higher)
    {
        if (ar[mid]==x)
        {
        return mid;
        }
        else if (x>ar[mid])
        {
            return BinarySrc(ar,x,mid+1,higher);
        }
        else
        return BinarySrc(ar,x,lower,mid-1);
        
    }
    else
    return -1;
}

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int ar[n];
    cout<<"Enter Elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    cout<<"Before Sorting:";
      for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
    sort(ar,ar+n);
    cout<<"Sorted array:";
      for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
    int x;
    cout<<"Enter value to search:";
    cin>>x;
    int index=BinarySrc(ar,x,0,n-1);

    if (index != -1)
    {
        cout<<"Value "<<x<<" index="<<index<<" position="<<index+1<<"\n";
    }
    else
    cout<<"Value not found\n";
    return 0;
}