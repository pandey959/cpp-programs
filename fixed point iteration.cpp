/*    Algorithm for fixed point iteration or direct substitution method*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define e .0001
#define max 20
#define g(x) exp(x) / 3
int main()
{
    int count = 0;
    float x0, x1, error;
    cout << "enter the initial guess value of x\n";
    cin >> x0;
begin:
    x1 = g(x0);
    error = fabs(x1 - x0);
    if (error <= e)
    {
        cout << "\n the root is:" << x1;
        cout << "\n The error is:" << error;
        cout << "No of steps is:" << count;
    }
    else
    {
        x0 = x1;
        count++;
        if (count < max)
            goto begin;
        else
            cout << "the process doesnot converge";
    }
    return 0;
}
