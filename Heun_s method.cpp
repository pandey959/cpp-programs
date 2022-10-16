// Heuns method
#include <iostream>
using namespace std;
#define max 15
int main()
{
   int n, i;
   float x, y, xp, h, m1, m2;
   float func(float, float);
   cout << "\n***Solution of Heuns method***";
   cout << "\nEnter the initial value of x \n";
   cin >> x;
   cout << "\nEnter the initial value of y \n";
   cin >> y;
   cout << "\nInput x at which y is required";
   cin >> xp;
   cout << "\nInput step size";
   cin >> h;
   n = (int)((xp - x) / h + 0.5);
   for (i = 1; i <= n; i++)
   {
      m1 = func(x, y);
      m2 = func(x + h, y + m1 * h);
      x = x + h;
      y = y + 0.5 * h * (m1 + m2);
      cout << i << x << y;
   }
   cout << "\nThe value of y at x=" << x << "is" << y;
   return 0;
}
float func(float x, float y)
{
   float f;
   f = 2.0 * y / x;
   return (f);
}
