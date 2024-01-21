#include <bits/stdc++.h>
using namespace std;
int main(){
    string st="BUBTMIRPURDHAKA";
    cout<<st<<endl;
    string st2;
    cout<<"Search pattern:";
    cin>>st2;
    int index= st.find(st2);
    if (index != string::npos)
    {
        cout<<st2<<" Index="<<index<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}