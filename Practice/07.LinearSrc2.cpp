#include <bits/stdc++.h>
using namespace std;
void LinearSrc(int ar[],int n){
    int x,count=0;
    cout<<"Your Array: ";
    for (int i = 0; i <n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter value to search:";
    cin>>x;
   for (int i = 0; i <n; i++)
    {
        if (ar[i]==x)
        {
            count++;
            cout<<x<<" index-"<<i<<" position- "<<i+1<<endl;
        }
    }
    if (count==0)
    {
        cout<<"Not found"<<x<<"in this array"<<endl;
    }

}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int ar[n];
    cout<<"Enter input:";
    for (int i = 0; i <n; i++)
    {
        cin>>ar[i];
    }
    LinearSrc(ar,n);
    return 0;
}