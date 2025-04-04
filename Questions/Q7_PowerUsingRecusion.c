// Write a Function to calculate power of a given number suppose power(a,b)=a^b
#include <stdio.h>
#include <stdlib.h>

float power(int a, int b){
    if (b==0)
    {
        return 1.000;
    }
    if (b==1)
    {
        return a;
    }
    
    else{
        return a*power(a, b-1);
    }
    
}


int main() {
    int a,b;
    scanf("%d %d", &a, &b );
    printf("%.3f", power(a,b));

    return 0;
}
