#include <bits/stdc++.h>
using namespace std;
int main(){
string word;
cout<<"Enter a word: ";
cin>>word;
if (word.length()>10)
{
    cout<<word[0]<<word.length()-2<<word.back();
}
else{
    cout<<word;
}
    return 0;
}