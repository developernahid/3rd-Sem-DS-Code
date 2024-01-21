#include <bits/stdc++.h>
using namespace std;
int main(){
    string st="THISCOSEISMADEBY-NAHID";
    cout<<"Current String= "<<st<<"\n";
    string st2;
    int pos;
    cout<<"Enter Position where you want to insert:";
    cin>>pos;
    cout<<"Enter your text:";
    cin>>st2;
    string NewText= st.insert(pos,st2);
    cout<<"Your string: "<<NewText<<"\n";
}