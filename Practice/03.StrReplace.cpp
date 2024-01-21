#include <bits/stdc++.h>
using namespace std;
int main(){
    string st="JE EI CODE Porbe Take Ami I LOVE YOU";
    cout<<st<<endl;
    int pos;
    string st2;
    cout<<"Enter postion:";
    cin>>pos;
    cout<<"Enter replacing text:";
    cin>>st2;
    string NewText= st.replace(pos,1,st2);
    cout<<"Your update text: "<<NewText<<endl;
}