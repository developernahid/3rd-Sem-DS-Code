#include <bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin>>word;
    int i=0;
    while (word[i]!='\0')
    {
       word[i]=tolower(word[i]);
       i++;
    }
   
    string st=word;
    reverse(word.begin(),word.end());
    string rv=word;
    if (st==rv)
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not Palindrome";
    
    return 0;
}