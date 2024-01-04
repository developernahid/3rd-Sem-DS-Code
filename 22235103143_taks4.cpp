#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[10];
    cout<<"Enter 10 element between 1-9: ";
    for (int i = 0; i < 10; i++)
    {
        cin>>ar[i];
    }
    for (int i = 1; i <=9; i++)
    {
        int count=0;
        for (int j = 0; j <=9; j++)
        {
           if (ar[j]==i)
           {
            count++;
           }
           
        }
        if(count>0){
            cout<<i<<" Occurs "<<count<<"(time)s"<<endl;
        }
    }
    return 0;
}