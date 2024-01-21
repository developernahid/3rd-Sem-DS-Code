#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1="Hello BUBTIAN STUDENTS";
    cout<<s1<<endl;
    int pos,len;
    cout<<"Enter Position:";
    cin>>pos;
    cout<<"Enter length:";
    cin>>len;
    string NewText= s1.erase(pos,len);
    cout<<NewText<<endl;
}