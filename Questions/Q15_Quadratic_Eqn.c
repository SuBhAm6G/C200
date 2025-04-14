#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    void Quad(double a, double b, double c){
        double D=(b*b) - (4*a*c);
        printf("Your given equation is =\n %.2lfx^2 + %.2lfx + %.2lf\n", a, b, c);
        printf("\tDo you want to find roots of this equation?\n");
        printf("\tPress 1 for Yes and 0 for No\n");
        int choice;
        scanf("%d", &choice);
        if (choice==0)
        {
            printf("Thank you for using this program\n");
            exit(0);
        }
        else if (choice!=1)
        {
            printf("Invalid choice\n");
            exit(0);
        }
        if (D==0)
        {
            double Root=(-b)/(2*a);
            printf("Root1=Root2=%.3lf", Root);
        }
        else if (D>0)
        {   double Root1=(-b)/(2*a)+sqrt(D)/(2*a);
           double Root2=(-b)/(2*a)-sqrt(D)/(2*a);
            printf("Root1 = %.3lf\nRoot2 = %.3lf",Root1,Root2);
        }
        else{
            double RealPart=-b/(2*a);
            double ImaginaryPart=sqrt(-D)/(2*a);
            printf("Root1 = %.3lf + %.3lfi\nRoot2 = %.3lf - %.3lfi",RealPart,ImaginaryPart,RealPart,ImaginaryPart);
        }
        
        
    }
int main() {
    double a,b,c;
    printf("Please input coefficients of quadratic equation\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        printf("Invalid input: 'a' must be non-zero for a quadratic equation.\n");
        return -1;
    }
    Quad(a,b,c);
    return 0;
}