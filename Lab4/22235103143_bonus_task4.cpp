#include <bits/stdc++.h>
using namespace std;
int check_bar(int ar[],int code, int n){
    int x=0;
    while (x<n && code>ar[x])
    {
        code = code-ar[x];
        x++;
    }
    return x;

}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i <n; i++)
    {
        cin>>ar[i];
    }
    int code;
    cin>>code;
    int index= check_bar(ar,code,n);
    if (n==0){
    cout<<"Invalid\n";
    }
    else
    cout<<index<<"\n";

    
    
}