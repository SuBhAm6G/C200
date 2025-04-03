//Write ackerman function and make a table showing that how exponentially value expands in this function

#include <stdio.h>
#include <stdlib.h>

int A(int m, int n){
    if (m==0)
    {
        return n+1;
    }
    else if (n==0)
    {
        return A(m-1, 1);
    }
    else
    {
        return A(m-1,A(m,n-1));
    }
    
    
}

int main(){
    int m,n;
    printf("This is Ackermann Function A(m,n)\n");
    printf("Input m :");
    scanf("%d", &m);
    printf("Input n :");
    scanf("%d", &n);

    printf("%d\n\n", A(m,n));

    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A(%d,%d) = %d\n", i, j, A(i,j));
        }
        printf("\n");
        
    }
    


}
