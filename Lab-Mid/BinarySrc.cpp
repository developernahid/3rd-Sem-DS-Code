#include <bits/stdc++.h>
using namespace std;
int BinarySrc(int ar[],int x,int l,int r){
    int mid = (l+r)/2;
    if (ar[mid]==x)
    {
        return mid;
        //
        if (x>ar[mid])
        {
            return (ar,x,mid+1,r);
        }
        else
        return (ar,x,0,mid-1);
        
    }
    else
    return -1;
    
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int x;
    cout<<"Enter value for search: ";
    cin>>x;
    int check= BinarySrc(ar,x,0,n-1);
    
    if (check != -1)
    {
        cout<<"Index= "<<check;
    }
    else
    cout<<"Error khaa";

    return 0;



    
}
