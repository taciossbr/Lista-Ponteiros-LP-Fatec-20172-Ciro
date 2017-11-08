#include <stdio.h>
void fun1 (int x, int * y)
{
 x = x + *y;
 *y = x * 2;
}
int fun2(int z)
{
 z = z + 3;
 return z;
}
int main ()
{
 int a = 5, b = 10;
 fun1(a, &b);
 printf ("a = %d\nb = %d\n", a, b);
 a = fun2(b);
 printf ("a = %d\nb = %d\n", a, b);
 return 0;
}