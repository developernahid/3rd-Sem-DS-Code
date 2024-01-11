#include <bits/stdc++.h>
using namespace std;
void fib(int n)
{
    int ary[n];
    ary[0] = 0;
    ary[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        ary[i] = ary[i - 1] + ary[i - 2];
    }
    cout<<"Output: " << ary[n - 1];
}
int main()
{
    int n;
    cout<<"Enter Input value: ";
    cin >> n;
    fib(n);
}