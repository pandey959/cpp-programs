// Stack Program

#include <iostream>
using namespace std;
int stack[5], top = -1;
void push();
void pop();
void show();

int main()
{
    int ch;
    cout << "1. PUSH\n";
    cout << "2. POP\n";
    cout << "3. SHOW\n";
    cout << "4. EXIT\n";

    while (1)
    {
        cout << "\n Enter your Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
            break;

        default:
            cout << "invalid option";
        }
    }
    return 0;
}

// Push Operation
void push()
{
    int item;
    if (top == 5 - 1)
    {
        cout << "stack is full";
    }
    else
    {
        cout << "push element in stack: ";
        cin >> item;
        top = top + 1;
        stack[top] = item;
    }
}

// Pop Operation
void pop()
{
    if (top == 1)
    {
        cout << "stack is empty";
    }
    else
    {
        cout<<"popped"<<stack[top]);
        top = top - 1;
    }
}

// Show Operation
void show()
{

    int I;
    if (top >= 0)
    {
        cout << "Stack elements \n";
        for (I = top; I >= 0; I--)
        {
            cout << stack[I];
        }
    }
    else
    {

        cout << "Stack is empty";
    }
}
