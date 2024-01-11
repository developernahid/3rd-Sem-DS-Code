#include <bits/stdc++.h>
using namespace std;
int main(){
    char word[50];
    cin>>word;
    int i,up=0,lw=0;
    int len= strlen(word);
    for (i = 0; i <len; i++)
    {
        if (isupper(word[i]))
        {
            up++;
        }
        else if (islower(word[i]))
        {
            lw++;
        }
    }
    for (i = 0; i <len; i++){
        if(up>lw)
        {
            word[i]=toupper(word[i]);
        }
        else if(lw>up)
        {
            word[i]=tolower(word[i]);
        }
        else{
            word[i]=tolower(word[i]);
        }
        cout<<word[i];
    }
    return 0;
}