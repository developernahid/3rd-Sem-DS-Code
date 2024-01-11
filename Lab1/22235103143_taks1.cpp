#include <bits/stdc++.h>
using namespace std;
void makeFactorial(int n){
    int num=n;
    long long int fact=1;
    while (n!=0)
    {
        fact= fact*n;
        n--;
    }
    cout<<"Factorial of "<<num<<" = "<<fact;
}
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    makeFactorial(n);
    return 0;
}