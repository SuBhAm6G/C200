#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    if (*a>*b)//5>4
    {
        *a=*a+*b;//9
        *b=*a-*b;//9-4=5
        *a=*a-*b;//9-5=4
    }
    else{
        *b=*b-*a;
        *a=*b+*a;
        *b=*a-*b;
    }
    
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swapping: a=%d, b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping: a=%d, b=%d\n",a,b);
    return EXIT_SUCCESS;
}