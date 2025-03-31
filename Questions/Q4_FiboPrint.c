// Print Fibonacci Series using recursion; All the print operation should be itself in function
#include <stdio.h>
void Fibo(int n, int a, int b)// 5 0 1
{ 
    if (n == 0)
    {
        return;
    }
    printf("%d  ", a);//print 0
    Fibo(n - 1, b, a + b);// 4 1 1
}

int main()
{
    int n;
    scanf("%d", &n);
    Fibo(n, 0, 1);
    return 0;
}
