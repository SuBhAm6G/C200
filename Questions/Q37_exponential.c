// Write a code that print the series of e^x to input term and also print it's summation
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int n){
    if(n<2)
        return 1;
    else
        return n*fact(n-1);
}

double sum(int n, int x){
    double total=1;
    for (int i = 1; i <= n; i++)
    {
        total+=(pow(x,i))/fact(i);
    }
    return total;
    
}
int main() {
    int n,x;
    printf("Enter the term you want the series to be printed to: ");
    scanf("%d", &n);
    printf("\n 1 + x ");
    for(int i = 2; i <= n; i++)
    {
        printf("+ (x^%d)/%d ", i, fact(i));
    }
    
    printf("\nEnter the value of x: ");
    scanf("%d", &x);
    printf("\nThe summation of the series is: %.4lf\n", sum(n, x));
    return 0;
}