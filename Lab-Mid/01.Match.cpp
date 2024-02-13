#include <bits/stdc++.h>
using namespace std;
bool Danger( string st){
    char ch = st[0];
    int count =1;
    for (int i = 1; i <st.length(); ++i)
    {
        if (st[i]==ch)
        {
            count++;
            if(count>=7) return true;
        }
        else{
            count=1;
            ch=st[i];

        }
        
    }
    return false;
}

int main(){
    string st;
    cout<<"Enter sample input: ";
    cin>>st;
    //bool check= Danger(st);
    if (Danger(st))
    {
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
    return 0;
}