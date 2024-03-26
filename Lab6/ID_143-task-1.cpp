#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 101;

void push(int arr[], int& top, int val)
{
    if (top == MAX_SIZE)
    {
        cout << "Stack Overflow!" << endl;
        return;
    }
    arr[top] = val;
    top++;
}
int pop(int arr[], int& top)
{
    if (top == 0)
    {
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    top--;
    return arr[top];
}

void display(int arr[], int top)
{
    if (top == 0)
    {
        cout << "size=0, items=NULL" << endl;
        return;
    }
    cout << "size: " << top << " ";
    cout << "Items: ";
    for (int i = 0; i < top; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main()
{
    int N, T;
    cin >> N;
    cin >> T;

    int stack[MAX_SIZE];
    int top = 0;
    int operation, item;

    for (int i = 0; i < T; i++)
    {
        cin >> operation;

        if (operation == 1)
        {
            cin >> item;
            push(stack, top, item);
        }
        else if (operation == 2)
        {
            pop(stack, top);
        }
        display(stack, top);
    }

    return 0;
}