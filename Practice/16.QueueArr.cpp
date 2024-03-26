#include <bits/stdc++.h>
using namespace std;
int ar[100];
    int n=100,r=-1,f=-1;
void insert(){
    int val;
    //full hoye gele n-1==rear
     if (r==n-1)
    {
        cout<<"Overflow\n";
    }
    else{
        if (f==-1 && r==-1)
    {
        f++;
        r++;
    }
    cout<<"Enter value: ";
    cin>>val;
    ar[r]=val;
    r=(r+1)%n;
    } 
}
void Dequeue(){
    if (f == -1 && r == -1)
    {
        cout<<"Underlow\n";
        return;
    }
    if (f==r)
    {
        f=-1;
        r=-1;
    }
    else{
        f=(f+1)%n;
    }
    
    
}


void Display(){
    if(f==-1)
    cout<<"Queue is empty\n";
    else{
        cout<<"Queue elements are: ";
        for (int i = f; i <r; i++)
        {
            cout<<ar[i]<<" ";
            
        }
        
    }
}

int main(){
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    Display();
    Dequeue();
    Display();
}

