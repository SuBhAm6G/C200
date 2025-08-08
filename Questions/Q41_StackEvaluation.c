//Limitation: Only supports single digit implementation

#include <stdio.h>
#include <string.h>
#include <limits.h>
#define MAX 50
int evaluator(char *exp){
    int stack[MAX];
    int top=-1;
    int i;

    //Iterating through each character
    for (i = 0; exp[i]!='\0'; i++)
    {
        char c=exp[i]; //
        //for digit
            if (c>=48 && c<=57)
            {
                if (top<MAX-1)
                {
                    stack[++top]=c-'0'; //converting char to int
                }
                else{
                    //Stack Overflow
                    return INT_MIN;
                }
                
            }
        //for operators
            else if(c=='+' || c=='-' || c=='*'||c=='/'){
                if(top<1){
                    printf("Not enough operands\n");
                    return INT_MIN;
                }
                int operand2=stack[top--];
                int operand1=stack[top--];

                switch (c) {
                case '+':
                    stack[++top] = operand1 + operand2;
                    break;
                case '-':
                    stack[++top] = operand1 - operand2;
                    break;
                case '*':
                    stack[++top] = operand1 * operand2;
                    break;
                case '/':
                    if (operand2 == 0) {
                        // Division by zero error
                        printf("Error: Division by zero.\n");
                        return INT_MIN;
                    }
                    stack[++top]=operand1/operand2;
                    break;
                }
            }
            else if (exp[i]==' ')
            {
                continue;
            }
            
            //other invalid characters
            else{
                printf("Invalid character in expression: %c\n", c);
                return INT_MIN;
            }
            
    }
    if (top==0)
    {
        return stack[top];
    }
    else{
        printf("Invalid Postfix expression\n");
        return -1;
    }
    
    
}

int main() {
    char exp[50];//Input of expression
    printf("Input Postfix expression: ");
    fgets(exp,sizeof(exp),stdin);

    int len=strlen(exp);
    if (len>0 && exp[len-1]=='\n')
    {
        exp[len-1]='\0';
    }
    int result=evaluator(exp);
    if (result!=-1)
    {
        printf("Final Result = %d", result);
    }
    
    return 0;
}