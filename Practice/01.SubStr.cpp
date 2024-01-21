#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int pos,len;
    cout<<"Enter a string:";
    getline(cin,str);
    cout<<str<<endl;
    cout<<"Enter 0-Position:";
    cin>>pos;
    string newText= str.substr(0,pos)+str.substr(10);
    cout<<newText<<endl;
    return 0;

}