#include <bits/stdc++.h>
using namespace std;
int BinarSrc(int ar[],int x,int left,int right){
    int mid=(left+right)/2;
    if (left<=right)
    {
        //mid==x;
        if(ar[mid]==x)
        return mid;
        //x>mid;
        else if (x>ar[mid])
        {
            return BinarSrc(ar,x,mid+1,right);
        }
        //x<mid;
        else{
            return BinarSrc(ar,x,0,mid-1);
        }
    }
    else
    return -1;
}
int main(){
int n;
cout<<"Enter size:";
cin>>n;
int ar[n];
cout<<"Enter elements:";
for (int i = 0; i <n; i++)
{
    cin>>ar[i];
}
int x;
cout<<"Enter value for search:";
cin>>x;
int index=BinarSrc(ar,x,0,n-1);
if(index != -1)
cout<<"Index of "<<x<<" is "<<index<<endl;
else
cout<<"Not found"<<endl;

 return 0;
}