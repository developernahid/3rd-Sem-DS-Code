#include <bits/stdc++.h>
using namespace std;
//lb= lowe bounce of array mane 0(index)
//hb= higher bounce mane array lenght-1, 5-1=4. 
//x= jeta khujteci
int BinarSrc(int ar[],int x,int lb,int hb){
    int mid=(lb+hb)/2;
    if (lb<=hb)
    {
        //mid==x;
        if(ar[mid]==x)
        return mid;
        //x>mid;
        else if (x>ar[mid])
        {
            return BinarSrc(ar,x,mid+1,hb);
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
cout<<"Index of "<<x<<" ="<<index<<endl;
else
cout<<"Not found"<<endl;

 return 0;
}
